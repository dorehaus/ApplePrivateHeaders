/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <TSPersistence/TSPObject.h>
#import <libobjc.A.dylib/TSDReducibleImageContainer.h>
#import <libobjc.A.dylib/TSDReplaceableMediaContainer.h>
#import <libobjc.A.dylib/TSKDocumentObject.h>
#import <libobjc.A.dylib/TSKModel.h>
#import <libobjc.A.dylib/TSWPSection.h>

@class TSWPStorage, TPPageMaster, NSString, NSUUID, TSDFill, TPPageTemplate, NSArray, NSURL;

@interface TPSection : TSPObject <TSDReducibleImageContainer, TSDReplaceableMediaContainer, TSKDocumentObject, TSKModel, TSWPSection> {

	TPPageMaster* _pageMasters[3];
	TSWPStorage* _parentStorage;
	NSString* _name;
	NSUUID* _sectionHyperlinkUUID;
	char _inheritPreviousHeaderFooter;
	char _pageMasterFirstPageDifferent;
	char _pageMasterFirstPageHidesHeaderFooter;
	char _pageMasterEvenOddPagesDifferent;
	unsigned _sectionStartKind;
	unsigned _sectionPageNumberKind;
	unsigned _sectionPageNumberStart;
	TSDFill* _backgroundFill;

}

@property (nonatomic,readonly) TPPageTemplate * pageTemplate; 
@property (nonatomic,readonly) NSArray * pageInfosForPropagation; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSUUID * sectionHyperlinkUUID; 
@property (nonatomic,readonly) NSString * localizedPrettyDisplayStringShort; 
@property (nonatomic,readonly) NSString * localizedPrettyDisplayStringLong; 
@property (assign,nonatomic,__weak) TSWPStorage * parentStorage; 
@property (assign,nonatomic) char inheritPreviousHeaderFooter; 
@property (assign,nonatomic) char pageMasterFirstPageDifferent; 
@property (assign,nonatomic) char pageMasterFirstPageHidesHeaderFooter; 
@property (assign,nonatomic) char pageMasterEvenOddPagesDifferent; 
@property (nonatomic,retain) TSDFill * backgroundFill;                                    //@synthesize backgroundFill=_backgroundFill - In the implementation block
@property (nonatomic,readonly) NSURL * url; 
@property (assign,nonatomic) unsigned sectionStartKind; 
@property (assign,nonatomic) unsigned sectionPageNumberKind; 
@property (assign,nonatomic) unsigned sectionPageNumberStart; 
@property (nonatomic,readonly) NSArray * pageMasters; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)needsObjectUUID;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSURL *)url;
-(id)initWithContext:(id)arg1 ;
-(id)allDrawables;
-(void)acceptVisitor:(id)arg1 ;
-(id)copyWithContext:(id)arg1 ;
-(id)childEnumerator;
-(void)willBeRemovedFromDocumentRoot:(id)arg1 ;
-(void)wasRemovedFromDocumentRoot:(id)arg1 ;
-(void)adoptStylesheet:(id)arg1 withMapper:(id)arg2 ;
-(CGSize)targetSizeForImageData:(id)arg1 associatedHint:(id)arg2 ;
-(TSWPStorage *)parentStorage;
-(void)setParentStorage:(TSWPStorage *)arg1 ;
-(void)willBeAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)wasAddedToDocumentRoot:(id)arg1 dolcContext:(id)arg2 ;
-(void)i_ensureHeaderFooterStoragesExistWithStylesheet:(id)arg1 ;
-(TSDFill *)backgroundFill;
-(TPPageTemplate *)pageTemplate;
-(id)objectUUIDPath;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(char)isHeaderFooterEmpty:(long long)arg1 ;
-(char)inheritPreviousHeaderFooter;
-(void)setInheritPreviousHeaderFooter:(char)arg1 ;
-(char)pageMasterFirstPageDifferent;
-(void)setPageMasterFirstPageDifferent:(char)arg1 ;
-(char)pageMasterFirstPageHidesHeaderFooter;
-(void)setPageMasterFirstPageHidesHeaderFooter:(char)arg1 ;
-(char)pageMasterEvenOddPagesDifferent;
-(void)setPageMasterEvenOddPagesDifferent:(char)arg1 ;
-(unsigned)sectionStartKind;
-(void)setSectionStartKind:(unsigned)arg1 ;
-(unsigned)sectionPageNumberKind;
-(void)setSectionPageNumberKind:(unsigned)arg1 ;
-(unsigned)sectionPageNumberStart;
-(void)setSectionPageNumberStart:(unsigned)arg1 ;
-(void)setBackgroundFill:(TSDFill *)arg1 ;
-(void)i_clearPropertiesToDefaults;
-(void)p_makeUserGuideStorage;
-(void)p_unarchiveAndUpgrade:(id)arg1 archive:(const SectionArchive*)arg2 ;
-(void)p_upgradePageSizeAndMarginsFromParsedArchive:(const SectionArchive*)arg1 ;
-(NSUUID *)sectionHyperlinkUUID;
-(id)initWithContext:(id)arg1 section:(id)arg2 ;
-(NSArray *)pageMasters;
-(id)pageMasterForType:(long long)arg1 ;
-(void)i_copyHeadersAndFootersFrom:(id)arg1 dolcContext:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(void)p_addAllDrawablesFromInfo:(id)arg1 toMutableArray:(id)arg2 ;
-(char)isHeaderFooterVisible:(long long)arg1 ;
-(void)setSectionHyperlinkUUID:(NSUUID *)arg1 ;
-(NSString *)localizedPrettyDisplayStringShort;
-(NSString *)localizedPrettyDisplayStringLong;
-(void)setPageMasterForFirstPage:(id)arg1 ;
-(id)pageMasterOwningModel:(id)arg1 ;
-(NSArray *)pageInfosForPropagation;
@end
