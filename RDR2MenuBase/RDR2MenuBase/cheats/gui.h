#pragma once
#include <d3d9.h>

namespace gui {
	constexpr int WIDTH = 300;
	constexpr int HEIGHT = 500;

	inline bool exit = true;

	// winapi win
	inline HWND window = nullptr;
	inline WNDCLASSEXA windowClass = { };

	// windows mov
	inline POINTS position = { };

	// dricet shit
	inline PDIRECT3D9 d3d = nullptr;
	inline LPDIRECT3DDEVICE9 device = nullptr;
	inline D3DPRESENT_PARAMETERS presentParameters = { };

	// ETC
	void CreateHWindow(const char* WindowName, const char* className) noexcept;
	void DestroyWindow() noexcept;

	// handle device
	bool CreateDevice() noexcept;
	void ResetDevice() noexcept;
	void DestroyDevice() noexcept;

	// Imgui
	void CreateImGui() noexcept;
	void DestroyImGui() noexcept;
}

