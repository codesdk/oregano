// This file was generated based on '/Users/coder/Library/Application Support/Fusetools/Packages/Fuse.Nodes/0.47.7/input/$.uno'.
// WARNING: Changes might be lost if you edit this file directly.

#pragma once
#include <Uno.Object.h>

namespace g{
namespace Fuse{
namespace Input{

// public abstract interface INotifyFocus :167
// {
uInterfaceType* INotifyFocus_typeof();

struct INotifyFocus
{
    void(*fp_OnFocusGained)(uObject*);
    void(*fp_OnFocusLost)(uObject*);
    static void OnFocusGained(const uInterface& __this) { __this.VTable<INotifyFocus>()->fp_OnFocusGained(__this); }
    static void OnFocusLost(const uInterface& __this) { __this.VTable<INotifyFocus>()->fp_OnFocusLost(__this); }
};
// }

}}} // ::g::Fuse::Input
