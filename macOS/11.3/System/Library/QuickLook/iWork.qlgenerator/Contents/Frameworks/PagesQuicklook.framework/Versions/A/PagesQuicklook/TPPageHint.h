/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/QuickLook/iWork.qlgenerator/Contents/Frameworks/PagesQuicklook.framework/Versions/A/PagesQuicklook
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <PagesQuicklook/PagesQuicklook-Structs.h>
#import <libobjc.A.dylib/TSWPOffscreenColumn.h>

@protocol TSWPTopicNumberHints;
@class NSArray, TSUNoCopyDictionary, NSSet, NSObject, NSDictionary, NSString;

@interface TPPageHint : NSObject <TSWPOffscreenColumn> {

	long long _pageKind;
	unsigned long long _pageRow;
	unsigned long long _pageColumn;
	NSArray* _hints;
	TSUNoCopyDictionary* _flowHints;
	NSRange _footnoteAutoNumberRange;
	NSRange _footnoteLayoutRange;
	NSArray* _childHints;
	TSUNoCopyDictionary* _anchoredDrawablePositions;
	NSSet* _startingPartitionedAttachments;
	NSObject*<TSWPTopicNumberHints> _topicNumbers;
	NSDictionary* _flowTopicNumbers;
	char _isCopyForCaching;
	char _hasForcedFootnotes;

}

@property (assign,nonatomic) long long pageKind;                                                //@synthesize pageKind=_pageKind - In the implementation block
@property (assign,nonatomic) unsigned long long pageColumn;                                     //@synthesize pageColumn=_pageColumn - In the implementation block
@property (assign,nonatomic) unsigned long long pageRow;                                        //@synthesize pageRow=_pageRow - In the implementation block
@property (assign,nonatomic) NSRange footnoteAutoNumberRange;                                   //@synthesize footnoteAutoNumberRange=_footnoteAutoNumberRange - In the implementation block
@property (assign,nonatomic) NSRange footnoteLayoutRange;                                       //@synthesize footnoteLayoutRange=_footnoteLayoutRange - In the implementation block
@property (assign,nonatomic) char hasForcedFootnotes;                                           //@synthesize hasForcedFootnotes=_hasForcedFootnotes - In the implementation block
@property (nonatomic,retain) TSUNoCopyDictionary * anchoredDrawablePositions;                   //@synthesize anchoredDrawablePositions=_anchoredDrawablePositions - In the implementation block
@property (nonatomic,retain) NSSet * startingPartitionedAttachments;                            //@synthesize startingPartitionedAttachments=_startingPartitionedAttachments - In the implementation block
@property (nonatomic,readonly) id<TSDHint> firstChildHint; 
@property (nonatomic,readonly) id<TSDHint> lastChildHint; 
@property (nonatomic,retain) NSArray * childHints;                                              //@synthesize childHints=_childHints - In the implementation block
@property (nonatomic,readonly) NSObject*<TSWPTopicNumberHints> topicNumbers; 
@property (nonatomic,readonly) unsigned long long lineCount; 
@property (nonatomic,readonly) NSRange range; 
@property (nonatomic,readonly) NSRange anchoredRange; 
@property (nonatomic,readonly) unsigned long long nextWidowPullsDownFromCharIndex; 
@property (nonatomic,readonly) char lastLineIsEmptyAndHasListLabel; 
@property (nonatomic,readonly) char terminatedByBreak; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSRange)range;
-(id)lastColumn;
-(id)hints;
-(id)firstColumn;
-(unsigned long long)lineCount;
-(id<TSDHint>)firstChildHint;
-(id<TSDHint>)lastChildHint;
-(id)copyForArchiving;
-(id)initWithArchive:(const PageHintArchive*)arg1 unarchiver:(id)arg2 ;
-(NSRange)anchoredRange;
-(unsigned long long)nextWidowPullsDownFromCharIndex;
-(void)saveToArchive:(PageHintArchive*)arg1 archiver:(id)arg2 context:(id)arg3 ;
-(id)firstHint;
-(id)lastHint;
-(void)trimToCharIndex:(unsigned long long)arg1 inTarget:(id)arg2 removeFootnoteReferenceCount:(unsigned long long)arg3 removeAutoNumberFootnoteCount:(unsigned long long)arg4 ;
-(char)lastLineIsEmptyAndHasListLabel;
-(char)terminatedByBreak;
-(long long)pageKind;
-(void)setFootnoteAutoNumberRange:(NSRange)arg1 ;
-(void)setFootnoteLayoutRange:(NSRange)arg1 ;
-(void)setChildHints:(NSArray *)arg1 ;
-(void)setAnchoredDrawablePositions:(TSUNoCopyDictionary *)arg1 ;
-(void)setStartingPartitionedAttachments:(NSSet *)arg1 ;
-(NSRange)footnoteAutoNumberRange;
-(NSRange)footnoteLayoutRange;
-(NSObject*<TSWPTopicNumberHints>)topicNumbers;
-(char)syncsFlowRanges:(id)arg1 withEndOfPageHint:(id)arg2 ;
-(id)flowHints;
-(void)setHints:(id)arg1 topicNumbers:(id)arg2 ;
-(NSRange)p_range;
-(BOOL)p_unarchiveHint:(id)arg1 fromArchive:(const TargetHintArchive*)arg2 ;
-(void)p_unarchiveTopicNumbers:(id)arg1 fromArchive:(const TopicNumberHintsArchive*)arg2 unarchiver:(id)arg3 ;
-(void)p_archiveHint:(id)arg1 intoArchive:(TargetHintArchive*)arg2 ;
-(TSUNoCopyDictionary *)anchoredDrawablePositions;
-(void)p_archiveTopicNumbers:(id)arg1 intoArchive:(TopicNumberHintsArchive*)arg2 archiver:(id)arg3 ;
-(id)copyForCaching;
-(void)setFlowHints:(id)arg1 flowTopicNumbers:(id)arg2 ;
-(id)flowTopicNumbers;
-(void)offsetStartCharIndexBy:(long long)arg1 charIndex:(unsigned long long)arg2 ;
-(char)syncsWithEndOfPageHint:(id)arg1 bodyStorage:(id)arg2 flowRanges:(id)arg3 ;
-(void)updateRangeForIndexPath:(id)arg1 withStorage:(id)arg2 ;
-(NSRange)rangeAndChildHints:(out id*)arg1 ;
-(void)setPageKind:(long long)arg1 ;
-(unsigned long long)pageColumn;
-(void)setPageColumn:(unsigned long long)arg1 ;
-(unsigned long long)pageRow;
-(void)setPageRow:(unsigned long long)arg1 ;
-(NSArray *)childHints;
-(char)hasForcedFootnotes;
-(void)setHasForcedFootnotes:(char)arg1 ;
-(NSSet *)startingPartitionedAttachments;
@end

