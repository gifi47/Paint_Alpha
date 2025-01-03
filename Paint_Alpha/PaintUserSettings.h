#pragma once
public enum class PasteMode
{
    ToActiveLayer,
    ToNewLayer
};

public enum class LayerOffset
{
    Disabled,
    Enabled
};

public ref class PaintUserSettings :
    public System::Configuration::ApplicationSettingsBase
{
    public:
    [System::Configuration::UserScopedSetting()]
    [System::Configuration::DefaultSettingValue("false")]
    property bool ShowLayersPanel
    {
        bool get()
        {
            return static_cast<bool>(this["ShowLayersPanel"]);
        }
        void set(bool value)
        {
            this["ShowLayersPanel"] = value;
        }
    }

    [System::Configuration::UserScopedSetting()]
    [System::Configuration::DefaultSettingValue("ToActiveLayer")]
    property PasteMode PasteOption
    {
        PasteMode get()
        {
            return (PasteMode)(int)this["PasteOption"];
        }
        void set(PasteMode value)
        {
            this["PasteOption"] = value;
        }
    }

    [System::Configuration::UserScopedSetting()]
    [System::Configuration::DefaultSettingValue("Disabled")]
    property LayerOffset LayerOffsetOption
    {
        LayerOffset get()
        {
            return (LayerOffset)(int)this["LayerOffsetOption"];
        }
        void set(LayerOffset value)
        {
            this["LayerOffsetOption"] = value;
        }
    }
};

