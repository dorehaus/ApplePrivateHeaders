/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/iLifeMediaBrowser.framework/Versions/A/iLifeMediaBrowser
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSOutlineView, NSMutableArray, NSString, NSLock, NSMutableDictionary;

@interface ILMediaGroupsTreeController : NSObject {

	NSOutlineView* _outlineView;
	NSMutableArray* _content;
	NSMutableArray* _selectedObjects;
	NSString* _childrenKeyPath;
	NSMutableArray* _observedPlugins;
	NSLock* _reloadLock;
	id _filterDelegate;
	char _inContentChange;
	NSMutableDictionary* _groupToNodeDict;
	char _didFinishPluginLoading;
	NSLock* _cachedNodesLock;
	NSMutableArray* _audioTabRootNodes;
	NSMutableArray* _imageTabRootNodes;
	NSMutableArray* _movieTabRootNodes;

}
-(void)dealloc;
-(id)init;
-(void)reset;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(void)setContent:(id)arg1 ;
-(id)content;
-(id)selectedObjects;
-(void)setSelectedObjects:(id)arg1 ;
-(id)outlineView;
-(void)setOutlineView:(id)arg1 ;
-(id)childrenKeyPath;
-(void)setChildrenKeyPath:(id)arg1 ;
-(id)allGroups;
-(void)addPlugin:(id)arg1 ;
-(id)filterDelegate;
-(void)setFilterDelegate:(id)arg1 ;
-(id)selectionDidChange;
-(id)selectedMediaGroups;
-(id)displayedMediaGroups;
-(id)mediaGroupNodeForMediaGroup:(id)arg1 ;
-(void)mediaObjectsNotification:(id)arg1 ;
-(void)mediaGroupLoadNotification:(id)arg1 ;
-(void)removeAllCachedRootNodesForPlugin:(id)arg1 excludeCurrentNode:(char)arg2 ;
-(void)removeAllPlugins;
-(void)removeAllCachedRootNodes;
-(id)currentRootNodes;
-(id)expandAppDefFolderNodesForRootNodes:(id)arg1 ;
-(void)_recursiveGenerateGroupNodeMapForChildGroups:(id)arg1 ;
-(void)cacheRootNodes:(id)arg1 ;
-(void)_generateGroupToNodeMap;
-(void)removePlugin:(id)arg1 ;
-(void)reloadForPlugin:(id)arg1 ;
-(void)updateMediaManagerIfSelected:(id)arg1 ;
-(void)sendDidLoadBrowserTypeIfNeeded;
-(void)_createHierarchy:(id)arg1 ;
-(id)createChildGroupNodeForMediaGroup:(id)arg1 parentNode:(id)arg2 filterDelegate:(id)arg3 plugin:(id)arg4 ;
-(char)shouldFilterOutMediaGroupNode:(id)arg1 forPlugin:(id)arg2 parentNode:(id)arg3 ;
-(void)_reloadFinished:(id)arg1 ;
-(id)cachedRootNodeForRootMediaGroup:(id)arg1 ;
-(id)createHierarchyWithRootGroup:(id)arg1 filterDelegate:(id)arg2 plugin:(id)arg3 ;
-(id)filterAndSortRootNodes:(id)arg1 ;
-(void)setAllGroups:(id)arg1 ;
-(char)_findParentsOfNode:(id)arg1 currentNode:(id)arg2 nodeArray:(id)arg3 ;
-(id)mediaGroupsForNodes:(id)arg1 ;
-(id)observedPlugins;
-(id)filteredMediaObjectsForMediaGroup:(id)arg1 ;
-(char)isInContentChange;
-(void)reloadAllGroups;
-(void)refilterForPlugin:(id)arg1 ;
-(void)_removeNodeObserversForRootGroupNodes:(id)arg1 ;
-(void)expandParentsOfNode:(id)arg1 ;
@end

