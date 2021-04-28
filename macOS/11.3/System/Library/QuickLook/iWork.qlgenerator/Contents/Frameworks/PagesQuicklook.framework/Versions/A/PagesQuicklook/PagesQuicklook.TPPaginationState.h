/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class TSWPStorage, TPPageIndexPath, NSArray, TPSection, TPSectionHint, NSString;

@interface PagesQuicklook.TPPaginationState : NSObject <NSCopying> {

	 bodyStorage;
	 isInvalid;
	 _pageIndexPath;
	 _documentPageIndex;
	 _lastLaidOutSectionIndex;
	 _bodyLayoutState;
	 _bodyCharIndex;
	 _footnoteIndex;
	 _sectionHints;

}

@property (readonly,nonatomic) TSWPStorage * bodyStorage; 
@property (assign,nonatomic) char isInvalid; 
@property (retain,nonatomic) TPPageIndexPath * pageIndexPath; 
@property (assign,nonatomic) unsigned long long documentPageIndex; 
@property (assign,nonatomic) unsigned long long lastLaidOutSectionIndex; 
@property (assign,nonatomic) void* bodyLayoutState; 
@property (assign,nonatomic) unsigned long long bodyCharIndex; 
@property (assign,nonatomic) unsigned long long footnoteIndex; 
@property (copy,nonatomic) NSArray * sectionHints; 
@property (assign,nonatomic) unsigned long long sectionIndex; 
@property (assign,nonatomic) unsigned long long pageIndex; 
@property (readonly,nonatomic) unsigned long long pageHintCount; 
@property (readonly,nonatomic) unsigned long long lastLaidOutDocumentPageIndex; 
@property (readonly,nonatomic) TPSection * section; 
@property (readonly,nonatomic) TPSectionHint * sectionHint; 
@property (readonly,nonatomic) NSRange sectionCharRange; 
@property (readonly,nonatomic) char onLastSection; 
@property (readonly,nonatomic) char isPaginationComplete; 
@property (readonly,nonatomic) NSString * description; 
-(id)copyWithZone:(void*)arg1 ;
-(NSString *)description;
-(id)init;
-(TPSection *)section;
-(char)isInvalid;
-(unsigned long long)sectionIndex;
-(void)setSectionIndex:(unsigned long long)arg1 ;
-(unsigned long long)pageIndex;
-(void)setPageIndex:(unsigned long long)arg1 ;
-(void)setIsInvalid:(char)arg1 ;
-(TSWPStorage *)bodyStorage;
-(char)isPaginationComplete;
-(id)copyForCaching;
-(id)pageHintForPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)documentPageIndex;
-(unsigned long long)bodyCharIndex;
-(NSRange)sectionCharRange;
-(char)onLastSection;
-(void*)bodyLayoutState;
-(unsigned long long)footnoteIndex;
-(char)isPaginationCompleteThroughDocumentPageIndex:(unsigned long long)arg1 ;
-(char)isPaginationCompleteUpToDocumentPageIndex:(unsigned long long)arg1 ;
-(NSArray *)sectionHints;
-(void)setDocumentPageIndex:(unsigned long long)arg1 ;
-(unsigned long long)lastLaidOutDocumentPageIndex;
-(id)initWithBodyStorage:(id)arg1 ;
-(void)setSectionHints:(NSArray *)arg1 ;
-(unsigned long long)pageHintCount;
-(void)setBodyCharIndex:(unsigned long long)arg1 ;
-(void)setFootnoteIndex:(unsigned long long)arg1 ;
-(void)trimSectionHintsFromIndex:(unsigned long long)arg1 ;
-(void)restartPaginationFromPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2 ;
-(void)setBodyLayoutState:(void*)arg1 ;
-(void)backUpToPageIndexPath:(id)arg1 documentPageIndex:(unsigned long long)arg2 ;
-(void)advancePageIndex;
-(TPPageIndexPath *)pageIndexPath;
-(TPSectionHint *)sectionHint;
-(void)removeAllSectionHints;
-(void)addSectionHint:(id)arg1 ;
-(void)advanceSectionIndex;
-(unsigned long long)lastLaidOutSectionIndex;
-(void)restartPaginationFromFirstPage;
-(void)setPageIndexPath:(TPPageIndexPath *)arg1 ;
-(void)setLastLaidOutSectionIndex:(unsigned long long)arg1 ;
-(NSRange)footnoteRangeInBodyTextRange:(NSRange)arg1 ;
-(id)pageIndexPathForPageIndex:(unsigned long long)arg1 ;
@end
