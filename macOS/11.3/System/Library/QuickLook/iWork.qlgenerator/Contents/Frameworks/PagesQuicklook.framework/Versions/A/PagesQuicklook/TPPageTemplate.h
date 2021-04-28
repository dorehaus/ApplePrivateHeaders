/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TSPersistence/TSPObject.h>
#import <libobjc.A.dylib/TSKDocumentObject.h>
#import <libobjc.A.dylib/TSDDrawableContainerInfo.h>
#import <libobjc.A.dylib/TPMasterDrawableProvider.h>
#import <libobjc.A.dylib/TSSPropertySource.h>
#import <libobjc.A.dylib/TSKModelRootIndexProvider.h>
#import <libobjc.A.dylib/TSKModel.h>
#import <libobjc.A.dylib/TSWPStorageParentStatisticsFilter.h>

@class NSArray, NSMutableArray, NSMutableDictionary, TPDrawablesZOrder, NSString, TSDFill, TSDInfoGeometry;

@interface TPPageTemplate : TSPObject <TSKDocumentObject, TSDDrawableContainerInfo, TPMasterDrawableProvider, TSSPropertySource, TSKModelRootIndexProvider, TSKModel, TSWPStorageParentStatisticsFilter> {

	char _headersFootersMatchPreviousPage;
	char _hideHeadersFooters;
	NSMutableArray* _masterDrawables;
	NSMutableDictionary* _placeholderDrawables;
	TPDrawablesZOrder* _drawablesZOrder;
	NSString* _name;
	TSDFill* _backgroundFill;

}

@property (nonatomic,retain) NSMutableArray * masterDrawables;                                           //@synthesize masterDrawables=_masterDrawables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * placeholderDrawables;                                 //@synthesize placeholderDrawables=_placeholderDrawables - In the implementation block
@property (nonatomic,readonly) TPDrawablesZOrder * drawablesZOrder;                                      //@synthesize drawablesZOrder=_drawablesZOrder - In the implementation block
@property (nonatomic,retain) NSString * name;                                                            //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) char headersFootersMatchPreviousPage;                                       //@synthesize headersFootersMatchPreviousPage=_headersFootersMatchPreviousPage - In the implementation block
@property (nonatomic,retain) TSDFill * backgroundFill;                                                   //@synthesize backgroundFill=_backgroundFill - In the implementation block
@property (assign,nonatomic) char hideHeadersFooters;                                                    //@synthesize hideHeadersFooters=_hideHeadersFooters - In the implementation block
@property (nonatomic,readonly) unsigned long long numberOfDerivedPagesInDocument; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) char isTopmostContainerInfo; 
@property (nonatomic,copy,readonly) NSArray * childInfos; 
@property (nonatomic,readonly) char isMaster; 
@property (nonatomic,copy) TSDInfoGeometry * geometry; 
@property (assign,nonatomic) NSObject*<TSDInfo> parentInfo; 
@property (assign,nonatomic) TSPObject*<TSDOwningAttachment> owningAttachment; 
@property (nonatomic,readonly) TSPObject*<TSDOwningAttachment> owningAttachmentNoRecurse; 
@property (getter=isFloatingAboveText,nonatomic,readonly) char floatingAboveText; 
@property (getter=isAnchoredToText,nonatomic,readonly) char anchoredToText; 
@property (getter=isInlineWithText,nonatomic,readonly) char inlineWithText; 
@property (getter=isInlineWithTextWithWrap,nonatomic,readonly) char inlineWithTextWithWrap; 
@property (getter=isAttachedToBodyText,nonatomic,readonly) char attachedToBodyText; 
@property (assign,nonatomic) char matchesObjectPlaceholderGeometry; 
@property (nonatomic,readonly) unsigned long long countOfMasterDrawables; 
+(char)needsObjectUUID;
+(char)isUserDefinedTag:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(char)isSelectable;
-(TSDInfoGeometry *)geometry;
-(void)setGeometry:(TSDInfoGeometry *)arg1 ;
-(char)isMaster;
-(id)copyWithContext:(id)arg1 ;
-(id)objectForProperty:(int)arg1 ;
-(Class)layoutClass;
-(id)childEnumerator;
-(void)setParentInfo:(NSObject*<TSDInfo>)arg1 ;
-(void)clearBackPointerToParentInfoIfNeeded:(id)arg1 ;
-(Class)repClass;
-(char)isThemeContent;
-(NSObject*<TSDInfo>)parentInfo;
-(TSPObject*<TSDOwningAttachment>)owningAttachment;
-(void)setOwningAttachment:(TSPObject*<TSDOwningAttachment>)arg1 ;
-(TSPObject*<TSDOwningAttachment>)owningAttachmentNoRecurse;
-(char)isFloatingAboveText;
-(char)isAnchoredToText;
-(char)isInlineWithText;
-(char)isAttachedToBodyText;
-(NSArray *)childInfos;
-(float)floatValueForProperty:(int)arg1 ;
-(char)containsProperty:(int)arg1 ;
-(id)boxedObjectForProperty:(int)arg1 ;
-(int)intValueForProperty:(int)arg1 ;
-(double)doubleValueForProperty:(int)arg1 ;
-(double)CGFloatValueForProperty:(int)arg1 ;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(TSDFill *)backgroundFill;
-(void)setPrimitiveGeometry:(id)arg1 ;
-(char)isInlineWithTextWithWrap;
-(double)highestScaleFactorForRenderingDrawableInfo:(id)arg1 ;
-(id)infoForSelectionPath:(id)arg1 ;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(long long)modelRootIndex;
-(TPDrawablesZOrder *)drawablesZOrder;
-(id)tagForDrawable:(id)arg1 ;
-(NSMutableArray *)masterDrawables;
-(unsigned long long)countOfMasterDrawables;
-(void)setBackgroundFill:(TSDFill *)arg1 ;
-(char)containsModelObject:(id)arg1 ;
-(unsigned long long)templateIndex;
-(char)headersFootersMatchPreviousPage;
-(char)hideHeadersFooters;
-(id)topLevelParentInfoForInfo:(id)arg1 ;
-(id)masterDrawablesSortedByZOrder:(id)arg1 ;
-(unsigned long long)indexOfMasterDrawable:(id)arg1 ;
-(void)addMasterDrawable:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(char)arg4 ;
-(void)addMasterDrawables:(id)arg1 atIndex:(unsigned long long)arg2 insertContext:(id)arg3 suppressDOLC:(char)arg4 ;
-(void)removeMasterDrawable:(id)arg1 suppressDOLC:(char)arg2 ;
-(char)statisticsShouldExcludeContainedStorage:(id)arg1 ;
-(id)initWithContext:(id)arg1 name:(id)arg2 placeholderDrawables:(id)arg3 placeholderTagsInZOrder:(id)arg4 masterDrawables:(id)arg5 ;
-(void)setHeadersFootersMatchPreviousPage:(char)arg1 ;
-(void)setHideHeadersFooters:(char)arg1 ;
-(char)isUniqueTag:(id)arg1 ;
-(id)userDefinedTagForDrawable:(id)arg1 ;
-(void)enumeratePlaceholderDrawablesWithBlock:(/*^block*/id)arg1 ;
-(void)applyTag:(id)arg1 toPlaceholder:(id)arg2 ;
-(unsigned long long)templatePreviewPageIndex;
-(unsigned long long)numberOfDerivedPagesInDocument;
-(void)addPlaceholderDrawable:(id)arg1 afterDrawable:(id)arg2 ;
-(void)setMasterDrawables:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)placeholderDrawables;
-(void)setPlaceholderDrawables:(NSMutableDictionary *)arg1 ;
@end

