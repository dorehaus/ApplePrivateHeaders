/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:50 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/CorePDF.framework/Versions/A/CorePDF
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <CorePDF/CorePDF-Structs.h>
#import <libobjc.A.dylib/CPDisposable.h>

@class CPParagraphListItem;

@interface CPList : NSObject <CPDisposable> {

	CGRect spacer;
	int type;
	unsigned ordinalPrefixLength;
	unsigned ordinalSuffixLength;
	CPParagraphListItem* parentItem;
	CFArrayRef items;

}

@property (assign,nonatomic) CGRect spacer; 
@property (assign,nonatomic) int type; 
@property (assign,nonatomic) unsigned ordinalPrefixLength; 
@property (assign,nonatomic) unsigned ordinalSuffixLength; 
@property (nonatomic,retain) CPParagraphListItem * parentItem; 
-(void)finalize;
-(void)dealloc;
-(id)init;
-(void)setType:(int)arg1 ;
-(unsigned)itemCount;
-(id)itemAtIndex:(unsigned)arg1 ;
-(int)type;
-(void)addItem:(id)arg1 ;
-(void)dispose;
-(CPParagraphListItem *)parentItem;
-(void)setParentItem:(CPParagraphListItem *)arg1 ;
-(char)containsParagraph:(id)arg1 ;
-(char)isMultilevel;
-(CGRect)spacer;
-(void)setSpacer:(CGRect)arg1 ;
-(unsigned)ordinalPrefixLength;
-(void)setOrdinalPrefixLength:(unsigned)arg1 ;
-(unsigned)ordinalSuffixLength;
-(void)setOrdinalSuffixLength:(unsigned)arg1 ;
@end

