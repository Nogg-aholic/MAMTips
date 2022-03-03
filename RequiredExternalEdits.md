# Required Content Edits

In order to build this plugin, you will have to make the following changes to your FactoryGame Content:

`WidgetBlueprint'/Game/FactoryGame/Interface/UI/InGame/MAMTree/Widget_MAMTree_Grid.Widget_MAMTree_Grid'`

Set the property item `mNodeData` to be "Instance Editable" (the eyeball). Otherwise you will get error messages similar to the following:

```
UATHelper: Package Mod Task (Windows):   LogInit: Display: LogProperty: Error: FStructProperty::Serialize Loading: Property 'StructProperty /Game/FactoryGame/Interface/UI/InGame/MAMTree/Widget_MAMTree_Grid.Widget_MAMTree_Grid_C:mNodeData.mNodeData_Value'. Unknown structure.
UATHelper: Package Mod Task (Windows):   LogInit: Display: LogProperty: Error: FStructProperty::Serialize Loading: Property 'StructProperty /Game/FactoryGame/Interface/UI/InGame/MAMTree/Widget_MAMTree_Grid.Widget_MAMTree_Grid_C:CreateNodeObject:NodeData'. Unknown structure.
UATHelper: Package Mod Task (Windows):   LogInit: Display: LogProperty: Error: FStructProperty::Serialize Loading: Property 'StructProperty /Game/FactoryGame/Interface/UI/InGame/MAMTree/Widget_MAMTree_Grid.Widget_MAMTree_Grid_C:AddOrUpdateNodeObject:NodeData'. Unknown structure.
UATHelper: Package Mod Task (Windows):   LogInit: Display: LogProperty: Error: FStructProperty::Serialize Loading: Property 'StructProperty /Game/FactoryGame/Interface/UI/InGame/MAMTree/Widget_MAMTree_Grid.Widget_MAMTree_Grid_C:GenerateTree:NodeData.NodeData_Value'. Unknown structure.
UATHelper: Package Mod Task (Windows):   LogInit: Display: LogProperty: Error: FStructProperty::Serialize Loading: Property 'StructProperty /Game/FactoryGame/Interface/UI/InGame/MAMTree/Widget_MAMTree_Grid.Widget_MAMTree_Grid_C:GetNodeState:NewNodeData.NewNodeData_Value'. Unknown structure.
```
