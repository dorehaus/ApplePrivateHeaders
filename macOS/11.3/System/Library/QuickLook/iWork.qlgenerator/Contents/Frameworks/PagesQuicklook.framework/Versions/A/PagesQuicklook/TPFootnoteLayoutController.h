/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PagesQuicklook/PagesQuicklook-Structs.h>
@class TPDocumentRoot;

@interface TPFootnoteLayoutController : NSObject {

	TPDocumentRoot* _documentRoot;
	char _bumpedDocumentEndnotesForPageBreak;

}

@property (nonatomic,__weak,readonly) id<TSWPFootnoteMarkProvider> footnoteMarkProvider; 
-(id<TSWPFootnoteMarkProvider>)footnoteMarkProvider;
-(id)initWithDocumentRoot:(id)arg1 ;
-(unsigned long long)p_layoutFootnotesInRange:(NSRange)arg1 intoFootnoteContainer:(id)arg2 maxBlockHeight:(double)arg3 measure:(char)arg4 inflating:(char)arg5 ;
-(id)p_footnoteReferenceStoragesInFootnoteIndexRange:(NSRange)arg1 ;
-(id)p_layoutForFootnoteReferenceStorage:(id)arg1 ;
-(NSRange)layOutFootnotesFromIndex:(unsigned long long)arg1 intoFootnoteContainer:(id)arg2 maxBlockHeight:(double)arg3 pageCharRange:(NSRange)arg4 sectionCharRange:(NSRange)arg5 isLastSection:(char)arg6 sectionHint:(id)arg7 pageHintIndex:(unsigned long long)arg8 ;
-(void)inflateFootnotesInRange:(NSRange)arg1 intoFootnoteContainer:(id)arg2 ;
-(NSRange)endnoteRangeForSectionCharRange:(NSRange)arg1 isLastSection:(char)arg2 sectionHint:(id)arg3 ;
-(NSRange)footnoteLayoutRangeForPageCharRange:(NSRange)arg1 ;
-(void)removeDeletedFootnoteInContainer:(id)arg1 ;
@end
