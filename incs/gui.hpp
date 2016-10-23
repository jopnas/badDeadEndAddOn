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

