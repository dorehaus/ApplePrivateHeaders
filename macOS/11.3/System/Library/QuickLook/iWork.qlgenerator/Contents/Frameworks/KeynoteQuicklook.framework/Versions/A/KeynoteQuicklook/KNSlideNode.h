/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/KeynoteQuicklook.framework/Versions/A/KeynoteQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <KeynoteQuicklook/KeynoteQuicklook-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <libobjc.A.dylib/TSKDocumentObject.h>
#import <libobjc.A.dylib/TSKModel.h>
#import <libobjc.A.dylib/TSCEResolverContainer.h>

@class TSPLazyReference, NSMutableDictionary, NSSet, NSString, NSArray, NSMutableSet, KNSlideTree, KNAbstractSlide, NSDictionary;

@interface KNSlideNode : TSPObject <TSKDocumentObject, TSKModel, TSCEResolverContainer> {

	TSPLazyReference* _slideReference;
	NSMutableDictionary* _thumbnails;
	char _thumbnailsAreDirty;
	NSSet* _digestsForDatasThatNeedDownloadForThumbnail;
	char _hidden;
	char _collapsed;
	char _collapsedInOutlineView;
	char _hasBodyInOutlineView;
	char _hasTransition;
	char _hasNote;
	char _slideNumberVisible;
	unsigned long long _depth;
	unsigned long long _slideSpecificHyperlinksCount;
	NSString* _classicUniqueID;
	NSString* _previousIdentifier;
	unsigned _tableNameCounter;
	NSArray* _children;
	char _hasBackgroundAlpha;
	NSMutableDictionary* _slideSpecificHyperlinkMap;
	char _hasExplicitBuilds;
	char _hasExplicitBuildsIsUpToDate;
	unsigned long long _buildEventCount;
	char _buildEventCountIsUpToDate;
	NSMutableSet* _remappedTableNames;
	KNSlideTree* _slideTree;

}

@property (nonatomic,retain) KNAbstractSlide * slide; 
@property (assign,nonatomic,__weak) KNSlideTree * slideTree;                                           //@synthesize slideTree=_slideTree - In the implementation block
@property (nonatomic,readonly) KNAbstractSlide * slideIfLoaded; 
@property (nonatomic,readonly) char hasChildren; 
@property (nonatomic,readonly) NSArray * children; 
@property (nonatomic,readonly) NSDictionary * thumbnails;                                              //@synthesize thumbnails=_thumbnails - In the implementation block
@property (assign,nonatomic) char thumbnailsAreDirty; 
@property (nonatomic,copy) NSSet * digestsForDatasThatNeedDownloadForThumbnail;                        //@synthesize digestsForDatasThatNeedDownloadForThumbnail=_digestsForDatasThatNeedDownloadForThumbnail - In the implementation block
@property (assign,getter=isHidden,nonatomic) char hidden; 
@property (assign,getter=isCollapsed,nonatomic) char collapsed;                                        //@synthesize collapsed=_collapsed - In the implementation block
@property (assign,getter=isCollapsedInOutlineView,nonatomic) char collapsedInOutlineView;              //@synthesize collapsedInOutlineView=_collapsedInOutlineView - In the implementation block
@property (assign,nonatomic) char hasBodyInOutlineView;                                                //@synthesize hasBodyInOutlineView=_hasBodyInOutlineView - In the implementation block
@property (nonatomic,readonly) long long bodyParagraphCount; 
@property (assign,nonatomic) char hasTransition; 
@property (assign,nonatomic) char hasNote; 
@property (assign,nonatomic) char isSlideNumberVisible; 
@property (nonatomic,readonly) char hasBackgroundAlpha;                                                //@synthesize hasBackgroundAlpha=_hasBackgroundAlpha - In the implementation block
@property (assign,nonatomic) unsigned long long depth; 
@property (nonatomic,readonly) NSDictionary * slideSpecificHyperlinkMap;                               //@synthesize slideSpecificHyperlinkMap=_slideSpecificHyperlinkMap - In the implementation block
@property (nonatomic,copy) NSString * previousIdentifier; 
@property (nonatomic,readonly) char hasExplicitBuilds; 
@property (nonatomic,readonly) char hasBuildEvents; 
@property (nonatomic,readonly) unsigned long long buildEventCount; 
@property (nonatomic,readonly) unsigned long long safeBuildEventCount; 
@property (nonatomic,retain) NSString * classicUniqueID; 
@property (nonatomic,readonly) NSString * uniqueIdentifier; 
@property (nonatomic,readonly) KNSlideNode * next; 
@property (nonatomic,readonly) KNSlideNode * previous; 
@property (nonatomic,readonly) KNSlideNode * nextSkippingCollapsed; 
@property (nonatomic,readonly) KNSlideNode * previousSkippingCollapsed; 
@property (nonatomic,readonly) KNSlideNode * nextSkippingHidden; 
@property (nonatomic,readonly) KNSlideNode * previousSkippingHidden; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)needsObjectUUID;
+(id)parentSlideNodeForInfo:(id)arg1 ;
+(id)slideNodeForSelectionPath:(id)arg1 ;
+(id)UUIDStringSetForSlideNodes:(id)arg1 ;
+(id)slideNodeUUIDForObsoleteUniqueIDString:(id)arg1 inSlideNodes:(id)arg2 ;
-(char)isHidden;
-(void)setHidden:(char)arg1 ;
-(NSString *)uniqueIdentifier;
-(id)initWithContext:(id)arg1 ;
-(void)setDepth:(unsigned long long)arg1 ;
-(unsigned long long)depth;
-(KNSlideNode *)next;
-(KNSlideNode *)previous;
-(NSArray *)children;
-(char)isCollapsed;
-(void)setCollapsed:(char)arg1 ;
-(NSDictionary *)thumbnails;
-(char)hasNote;
-(char)hasChildren;
-(void)p_commonInit;
-(KNAbstractSlide *)slide;
-(char)hasTransition;
-(void)removeAllThumbnails;
-(id)descendants;
-(id)childEnumerator;
-(void)setSlide:(KNAbstractSlide *)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(KNSlideNode *)nextSkippingHidden;
-(KNSlideNode *)previousSkippingHidden;
-(void)saveToArchive:(SlideNodeArchive*)arg1 archiver:(id)arg2 ;
-(id)objectUUIDPath;
-(void)updateHasBackgroundAlpha;
-(char)isSlideNumberVisible;
-(void)setIsSlideNumberVisible:(char)arg1 ;
-(void)invalidateBuildEventCountCaches;
-(void)loadFromArchive:(const SlideNodeArchive*)arg1 unarchiver:(id)arg2 ;
-(char)hasBackgroundAlpha;
-(id)paragraphIndexesOfTopLevelBullets;
-(char)safeHasBuildEvents;
-(unsigned long long)safeBuildEventCount;
-(KNSlideTree *)slideTree;
-(id)resolverMatchingName:(id)arg1 ;
-(id)resolversMatchingPrefix:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(KNAbstractSlide *)slideIfLoaded;
-(void)setSlideTree:(KNSlideTree *)arg1 ;
-(void)removeHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2 ;
-(void)addHyperlinkForInfo:(id)arg1 toSlideNode:(id)arg2 ;
-(void)removeHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2 ;
-(void)addHyperlinkForStorage:(id)arg1 toSlideNode:(id)arg2 ;
-(void)p_updateHasExplicitBuilds;
-(char)hasBuildEvents;
-(unsigned long long)buildEventCount;
-(unsigned long long)p_buildEventCount;
-(char)hasBodyInOutlineView;
-(void)p_addHyperlinkForObjectReferencedByMapping:(id)arg1 toSlideNode:(id)arg2 ;
-(unsigned long long)numberOfLinksToSlideNodeInStorage:(id)arg1 forSlideNodeUUIDString:(id)arg2 ;
-(id)p_getSlideSpecificMappingForStorage:(id)arg1 forSlideNode:(id)arg2 ;
-(void)p_removeHyperlinkForObjectReferencedByMapping:(id)arg1 toSlideNode:(id)arg2 ;
-(void)removeSlideSpecificMappingsFromDrawablesInGroup:(id)arg1 ;
-(id)slideAndReturnError:(id*)arg1 ;
-(void)didLoadSlide:(id)arg1 ;
-(id)descendantsOmittingSkippedSlideNodes:(char)arg1 omittingCollapsedSlideNodes:(char)arg2 ;
-(void)p_addOldModelDescendantsToSlideTree:(id)arg1 atDepth:(unsigned long long)arg2 ;
-(char)resolverNameIsUsed:(id)arg1 ;
-(unsigned)nextUntitledResolverIndex;
-(unsigned)saveNextUntitledResolverIndex;
-(void)rollbackNextUntitledResolverIndex:(unsigned)arg1 ;
-(void)addRemappedTableName:(id)arg1 ;
-(id)remappedTableNames;
-(void)clearRemappedTableNames;
-(char)thumbnailsAreDirty;
-(void)setThumbnailsAreDirty:(char)arg1 ;
-(void)setHasTransition:(char)arg1 ;
-(void)setHasNote:(char)arg1 ;
-(NSString *)classicUniqueID;
-(void)setClassicUniqueID:(NSString *)arg1 ;
-(NSString *)previousIdentifier;
-(void)setPreviousIdentifier:(NSString *)arg1 ;
-(KNSlideNode *)nextSkippingCollapsed;
-(KNSlideNode *)previousSkippingCollapsed;
-(char)hasExplicitBuilds;
-(long long)bodyParagraphCount;
-(void)uniquifyTableNamesForUpgradeOrImport;
-(char)hasSlideSpecificHyperlinks;
-(char)hasSlideSpecificHyperlinkToNode:(id)arg1 ;
-(void)addHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2 ;
-(void)cleanOutInvalidSlideSpecificInfoEntries;
-(void)removeHyperlinkFieldMap:(id)arg1 forStorage:(id)arg2 ;
-(void)setDigestsForDatasThatNeedDownloadForThumbnail:(NSSet *)arg1 ;
-(void)addThumbnail:(id)arg1 atSize:(CGSize)arg2 ;
-(void)removeThumbnailAtSize:(CGSize)arg1 ;
-(void)addOldModelDescendantsToSlideTree:(id)arg1 ;
-(void)purgeU15ModelIfNeeded;
-(NSSet *)digestsForDatasThatNeedDownloadForThumbnail;
-(char)isCollapsedInOutlineView;
-(void)setCollapsedInOutlineView:(char)arg1 ;
-(void)setHasBodyInOutlineView:(char)arg1 ;
-(NSDictionary *)slideSpecificHyperlinkMap;
-(id)p_mappingFromString:(id)arg1 ;
-(id)p_slideNodeWithUUIDString:(id)arg1 inSlideNodes:(id)arg2 ;
-(void)upgradeSlideSpecificStorageHyperlinksForStorage:(id)arg1 withSlideNodes:(id)arg2 ;
-(void)removeInvalidSlideSpecificHyperlinksForStorage:(id)arg1 withSlideNodeUUIDStrings:(id)arg2 ;
-(void)clearSlideSpecificLinkMap;
-(void)upgradeSlideSpecificHyperlinksForSlideNodes:(id)arg1 ;
-(void)removeInvalidSlideSpecificHyperlinksWithSlideNodeUUIDStrings:(id)arg1 ;
-(void)removeObsoleteFieldsFor20Upgrade;
@end

