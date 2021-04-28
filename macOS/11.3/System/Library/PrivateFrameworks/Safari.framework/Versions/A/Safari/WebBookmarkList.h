/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Safari.framework/Versions/A/Safari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Safari/Safari-Structs.h>
#import <Safari/WebBookmark.h>

@class NSMutableArray, NSCountedSet, NSArray;

@interface WebBookmarkList : WebBookmark {

	NSMutableArray* _threadUnsafeChildren;
	NSCountedSet* _threadUnsafeChildWrappers;
	char _threadUnsafeAutomaticallyOpensInTabs;

}

@property (nonatomic,readonly) unsigned long long numberOfDescendants; 
@property (readonly) char automaticallyOpensInTabs;                                            //@synthesize threadUnsafeAutomaticallyOpensInTabs=_threadUnsafeAutomaticallyOpensInTabs - In the implementation block
@property (nonatomic,copy,readonly) NSArray * folderAndLeafChildren; 
@property (nonatomic,copy,readonly) NSArray * leafChildren; 
@property (getter=isReadingListFolder,nonatomic,readonly) char readingListFolder; 
+(id)smallImageForBookmarkList;
+(id)_test_allDescendentsOfBookmarkList:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)childAtIndex:(unsigned long long)arg1 ;
-(void)insertChild:(id)arg1 atIndex:(unsigned long long)arg2 ;
-(id)_children;
-(id)icon;
-(void)removeChild:(id)arg1 ;
-(id)iconURLString;
-(unsigned long long)numberOfChildren;
-(long long)bookmarkType;
-(char)isReadingListFolder;
-(void)enumerateChildrenUsingBlock:(/*^block*/id)arg1 ;
-(char)canOpenInTabs;
-(void)getFolderAndLeafChildrenWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getDescendantsPassingTest:(/*^block*/id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)getLeafChildrenWithCompletionHandler:(/*^block*/id)arg1 ;
-(char)isUserVisiblyEqualToBookmark:(id)arg1 ;
-(void)clearDAVSyncState;
-(char)automaticallyOpensInTabs;
-(void)setAutomaticallyOpensInTabs:(char)arg1 changeWasInteractive:(char)arg2 ;
-(unsigned long long)indexOfChild:(id)arg1 ;
-(void)enumerateChildrenWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(vector<unsigned long, std::__1::allocator<unsigned long>>*)indexesForShownCollectionsWithChildCount:(unsigned long long*)arg1 ;
-(NSArray *)leafChildren;
-(void)enumerateLeafDescendantsUsingBlock:(/*^block*/id)arg1 ;
-(id)firstChildWithURL:(id)arg1 ;
-(NSArray *)folderAndLeafChildren;
-(char)mergeAttributesFromBookmark:(id)arg1 ;
-(unsigned long long)numberOfChildrenMatchingBookmark:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 UUID:(id)arg2 group:(id)arg3 ;
-(void)_updateStateHash:(SHA256*)arg1 ;
-(id)_mutableDictionaryRepresentation;
-(id)initFromDictionaryRepresentation:(id)arg1 topLevelOnly:(char)arg2 withGroup:(id)arg3 ;
-(void)updateByCopyingSyncDataFromBookmark:(id)arg1 withChildBookmarksByUUID:(id)arg2 ;
-(void)clearAllChangesRecursively;
-(char)updateByCopyingAttributesFromBookmark:(id)arg1 withExistingBookmarksByUUID:(id)arg2 ;
-(unsigned long long)numberOfDescendants;
-(id)_childrenIncludingFolders:(char)arg1 ;
-(void)_appendDescendantsPassingTest:(/*^block*/id)arg1 toArray:(id)arg2 ;
-(void)_enumerateLeafDescendantsOnChildrenAccessQueueUsingBlock:(/*^block*/id)arg1 ;
-(id)test_allDescendents;
@end

