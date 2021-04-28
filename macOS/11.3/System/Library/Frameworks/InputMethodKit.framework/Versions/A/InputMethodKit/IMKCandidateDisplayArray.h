/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableArray, NSArray;

@interface IMKCandidateDisplayArray : NSObject {

	NSMutableArray* _internalArray;
	double _length;

}

@property (nonatomic,readonly) NSMutableArray * currentArray; 
@property (nonatomic,retain) NSMutableArray * internalArray;               //@synthesize internalArray=_internalArray - In the implementation block
@property (assign,nonatomic) double length;                                //@synthesize length=_length - In the implementation block
@property (nonatomic,readonly) NSArray * positionedUIStrings; 
-(NSMutableArray *)internalArray;
-(NSMutableArray *)currentArray;
-(void)addString:(id)arg1 distance:(double)arg2 rightAligned:(char)arg3 ;
-(NSArray *)positionedUIStrings;
-(void)addString:(id)arg1 distance:(double)arg2 ;
-(void)addRightAlignedString:(id)arg1 distance:(double)arg2 ;
-(void)lineBreak;
-(void)setInternalArray:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(double)length;
-(void)setLength:(double)arg1 ;
@end

