// Item Actionss
class RscListbox;
class ScrollBar;
class InventoryActionMenu: RscListbox
{
    idc = 666666;
    access = 0; // Control access (0 - ReadAndWrite, 1 - ReadAndCreate, 2 - ReadOnly, 3 - ReadOnlyVerified)
    type = 5; // Type is 5
    x = 0; // Horizontal coordinates
    y = 0; // Vertical coordinates
    w = 0.2; // Width
    h = 0.1; // Height
    sizeEx = 0.027; // Text size
    rowHeight = 0.027; // Row height
    itemSpacing = 0.01;
    period = 0; // Oscillation time between colorSelect/colorSelectBackground2 and colorSelect2/colorSelectBackground when selected
    blinkingPeriod = 0; // Time in which control will fade out and back in. Use 0 to disable the effect.

    colorBackground[] = {0,0,0,1}; // Fill color
    colorSelectBackground[] = {0,0,0,1}; // Selected item fill color
    colorSelectBackground2[] = {0,0,0,1}; // Selected item fill color (oscillates between this and colorSelectBackground)
    font = "TahomaB"; // Font from CfgFontFamilies
    shadow = 0; // Shadow (0 - none, 1 - directional, color affected by colorShadow, 2 - black outline)
    colorText[] = {0.8,0.8,0.8,1}; // Text and frame color
    colorDisabled[] = {0.8,0.8,0.8,1}; // Disabled text color
    colorSelect[] = {0.8,0.8,0.8,1}; // Text selection color
    colorSelect2[] = {0.8,0.8,0.8,1}; // Text selection color (oscillates between this and colorSelect)
    colorShadow[] = {0,0,0,1}; // Text shadow color (used only when shadow is 1)

    pictureColor[] = {1,0.5,0,1}; // Picture color
    pictureColorSelect[] = {1,1,1,1}; // Selected picture color
    pictureColorDisabled[] = {1,1,1,1}; // Disabled picture color

    tooltip = ""; // Tooltip text
    tooltipColorShade[] = {0,0,0,1}; // Tooltip background color
    tooltipColorText[] = {1,1,1,1}; // Tooltip text color
    tooltipColorBox[] = {1,1,1,1}; // Tooltip frame color

    maxHistoryDelay = 1; // Time since last keyboard type search to reset it
    canDrag = 0; // 1 (true) to allow item dragging
};

// Codelock GUI
class RscPicture;
class RscButton;
class codeLockNum : RscButton
{
    style = 2;
    borderSize = 0;
    colorBackground[] = {0.5,0.5,0.5,1};
    colorBackgroundActive[] = {0.5,0.5,0.5,1};
    colorBackgroundDisabled[] = {0.5,0.5,0.5,1};
    colorBorder[] = {0,0,0,0};
    colorDisabled[] = {1,1,1,1};
    colorFocused[] = {1,1,1,1};
    colorShadow[] = {0,0,0,0.5};
    colorText[] = {1,1,1,1};
    offsetPressedX = 0.01;
    offsetPressedY = 0.01;
    offsetX = 0
    offsetY = 0;
}

class codelockGUI {
    idd = 666667;
    movingEnable = 0;
    duration = 100000;
    name = "codelockGUI";
    onLoad = "uiNamespace setVariable ['codelockGUIs', _this select 0];";

    class controls {
        class bdeCoselockBackground: RscPicture
        {
            idc = 1213;
            text = "#(argb,8,8,3)color(0,0,0,1)";
            x = 11.5 * GUI_GRID_W + GUI_GRID_X;
            y = 2 * c + GUI_GRID_Y;
            w = 17.5 * GUI_GRID_W;
            h = 20.5 * GUI_GRID_H;
            colorBackground[] = {0,0,0,1};
            colorText[] = {1,1,1,1};
        };
        class bdeCodelockButton1: codeLockNum
        {
            idc = 1214;
            text = "1";
            x = 14 * GUI_GRID_W + GUI_GRID_X;
            y = 3 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton2: codeLockNum
        {
            idc = 1215;
            text = "2";
            x = 19 * GUI_GRID_W + GUI_GRID_X;
            y = 3 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton3: codeLockNum
        {
            idc = 1216;
            text = "3";
            x = 24 * GUI_GRID_W + GUI_GRID_X;
            y = 3 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton4: codeLockNum
        {
            idc = 1217;
            text = "4";
            x = 14 * GUI_GRID_W + GUI_GRID_X;
            y = 7 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton5: codeLockNum
        {
            idc = 1218;
            text = "5";
            x = 19 * GUI_GRID_W + GUI_GRID_X;
            y = 7 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton6: codeLockNum
        {
            idc = 1219;
            text = "6";
            x = 24 * GUI_GRID_W + GUI_GRID_X;
            y = 7 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton7: codeLockNum
        {
            idc = 1220;
            text = "7";
            x = 14 * GUI_GRID_W + GUI_GRID_X;
            y = 11 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton8: codeLockNum
        {
            idc = 1221;
            text = "8";
            x = 19 * GUI_GRID_W + GUI_GRID_X;
            y = 11 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton9: codeLockNum
        {
            idc = 1222;
            text = "9";
            x = 24 * GUI_GRID_W + GUI_GRID_X;
            y = 11 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButton0: codeLockNum
        {
            idc = 1223;
            text = "0";
            x = 19 * GUI_GRID_W + GUI_GRID_X;
            y = 15 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButtonC: codeLockNum
        {
            idc = 1224;
            text = "C";
            x = 14 * GUI_GRID_W + GUI_GRID_X;
            y = 15 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButtonHash: codeLockNum
        {
            idc = 1225;
            text = "#";
            x = 24 * GUI_GRID_W + GUI_GRID_X;
            y = 15 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
        class bdeCodelockButtonOk: codeLockNum
        {
            idc = 1226;
            text = "OK";
            x = 19 * GUI_GRID_W + GUI_GRID_X;
            y = 19 * GUI_GRID_H + GUI_GRID_Y;
            w = 3 * GUI_GRID_W;
            h = 3 * GUI_GRID_H;
        };
    };
};