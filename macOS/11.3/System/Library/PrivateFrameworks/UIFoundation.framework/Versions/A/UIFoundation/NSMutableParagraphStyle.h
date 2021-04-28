/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:01 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/Versions/A/UIFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <UIFoundation/NSParagraphStyle.h>

@class NSArray;

@interface NSMutableParagraphStyle : NSParagraphStyle

@property (assign) double lineSpacing; 
@property (assign) double paragraphSpacing; 
@property (assign) long long alignment; 
@property (assign) double firstLineHeadIndent; 
@property (assign) double headIndent; 
@property (assign) double tailIndent; 
@property (assign) unsigned long long lineBreakMode; 
@property (assign) double minimumLineHeight; 
@property (assign) double maximumLineHeight; 
@property (assign) long long baseWritingDirection; 
@property (assign) double lineHeightMultiple; 
@property (assign) double paragraphSpacingBefore; 
@property (assign) float hyphenationFactor; 
@property (copy) NSArray * tabStops; 
@property (assign) double defaultTabInterval; 
@property (assign) char allowsDefaultTighteningForTruncation; 
@property (assign) float tighteningFactorForTruncation; 
@property (copy) NSArray * textBlocks; 
@property (copy) NSArray * textLists; 
@property (assign) long long headerLevel; 
@property (assign) unsigned long long lineBreakStrategy; 
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setBaseWritingDirection:(long long)arg1 ;
-(void)setAlignment:(long long)arg1 ;
-(void)setFirstLineHeadIndent:(double)arg1 ;
-(void)setHeadIndent:(double)arg1 ;
-(void)setTailIndent:(double)arg1 ;
-(void)setTabStops:(NSArray *)arg1 ;
-(void)setDefaultTabInterval:(double)arg1 ;
-(void)setLineBreakMode:(unsigned long long)arg1 ;
-(void)setLineHeightMultiple:(double)arg1 ;
-(void)setMaximumLineHeight:(double)arg1 ;
-(void)setMinimumLineHeight:(double)arg1 ;
-(void)setLineSpacing:(double)arg1 ;
-(void)setParagraphSpacing:(double)arg1 ;
-(void)setParagraphSpacingBefore:(double)arg1 ;
-(void)_setLineBoundsOptions:(unsigned long long)arg1 ;
-(void)setCompositionLanguage:(long long)arg1 ;
-(void)setLineBreakStrategy:(unsigned long long)arg1 ;
-(void)setAllowsDefaultTighteningForTruncation:(char)arg1 ;
-(void)setTextBlocks:(NSArray *)arg1 ;
-(void)setTextLists:(NSArray *)arg1 ;
-(void)removeTabStop:(id)arg1 ;
-(void)addTabStop:(id)arg1 ;
-(void)setUsesDefaultHyphenation:(char)arg1 ;
-(void)setHyphenationFactor:(float)arg1 ;
-(void)setParagraphStyle:(id)arg1 ;
-(void)setTighteningFactorForTruncation:(float)arg1 ;
-(void)setHeaderLevel:(long long)arg1 ;
-(void)_mutateTabStops;
-(void)setAllowsHangingPunctuation:(char)arg1 ;
-(void)setUsesOpticalAlignment:(char)arg1 ;
@end

