/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:11 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/InputMethodKit.framework/Versions/A/InputMethodKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <InputMethodKit/InputMethodKit-Structs.h>
@class NSMutableDictionary, NSMutableArray, NSArray;

@interface IMKLayout : NSObject {

	double _candidateThickness;
	NSMutableDictionary* _candidateIndexToPositionMapping;
	NSMutableDictionary* _candidateIndexToNumberIndex;
	unsigned long long _currentSlot;
	unsigned long long _currentIndex;
	double _maxX;
	double _maxY;
	long long _currentLineNumber;
	char _partial;
	NSMutableArray* _lines;
	NSMutableArray* _layoutUnitsInternal;
	CGSize _extraSize;

}

@property (assign,nonatomic) double candidateThickness;                                          //@synthesize candidateThickness=_candidateThickness - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateIndexToPositionMapping;              //@synthesize candidateIndexToPositionMapping=_candidateIndexToPositionMapping - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * candidateIndexToNumberIndex;                  //@synthesize candidateIndexToNumberIndex=_candidateIndexToNumberIndex - In the implementation block
@property (assign,nonatomic) unsigned long long currentSlot;                                     //@synthesize currentSlot=_currentSlot - In the implementation block
@property (assign,nonatomic) unsigned long long currentIndex;                                    //@synthesize currentIndex=_currentIndex - In the implementation block
@property (assign,nonatomic) double maxX;                                                        //@synthesize maxX=_maxX - In the implementation block
@property (assign,nonatomic) double maxY;                                                        //@synthesize maxY=_maxY - In the implementation block
@property (assign,nonatomic) long long currentLineNumber;                                        //@synthesize currentLineNumber=_currentLineNumber - In the implementation block
@property (assign,nonatomic) char partial;                                                       //@synthesize partial=_partial - In the implementation block
@property (nonatomic,retain) NSMutableArray * lines;                                             //@synthesize lines=_lines - In the implementation block
@property (nonatomic,retain) NSMutableArray * layoutUnitsInternal;                               //@synthesize layoutUnitsInternal=_layoutUnitsInternal - In the implementation block
@property (nonatomic,readonly) NSArray * layoutUnits; 
@property (nonatomic,readonly) unsigned long long lineCount; 
@property (nonatomic,readonly) CGSize canvasSize; 
@property (assign,nonatomic) CGSize extraSize;                                                   //@synthesize extraSize=_extraSize - In the implementation block
-(NSArray *)layoutUnits;
-(double)candidateThickness;
-(void)setCandidateThickness:(double)arg1 ;
-(SCD_Struct_IM11)lineAndSlotForCandidateIndex:(id)arg1 ;
-(CGSize)extraSize;
-(void)setExtraSize:(CGSize)arg1 ;
-(void)extendHeight:(double)arg1 ;
-(void)extendWidth:(double)arg1 ;
-(unsigned long long)candidateNumberForKey:(id)arg1 ;
-(id)layoutUnitForKey:(id)arg1 ;
-(NSMutableArray *)layoutUnitsInternal;
-(void)addLayoutUnit:(id)arg1 ;
-(void)setLayoutUnitsInternal:(NSMutableArray *)arg1 ;
-(void)setCurrentSlot:(unsigned long long)arg1 ;
-(void)changeLine;
-(NSMutableDictionary *)candidateIndexToPositionMapping;
-(id)currentLine;
-(unsigned long long)currentSlot;
-(id)dictionaryForPosition:(SCD_Struct_IM11)arg1 ;
-(NSMutableDictionary *)candidateIndexToNumberIndex;
-(SCD_Struct_IM11)positionForDictionary:(id)arg1 ;
-(void)setCandidateIndexToPositionMapping:(NSMutableDictionary *)arg1 ;
-(void)setCandidateIndexToNumberIndex:(NSMutableDictionary *)arg1 ;
-(void)dealloc;
-(id)description;
-(id)init;
-(NSMutableArray *)lines;
-(id)lineAtIndex:(unsigned long long)arg1 ;
-(void)setLines:(NSMutableArray *)arg1 ;
-(void)setMaxX:(double)arg1 ;
-(void)setMaxY:(double)arg1 ;
-(double)maxX;
-(double)maxY;
-(CGSize)canvasSize;
-(unsigned long long)currentIndex;
-(void)setCurrentIndex:(unsigned long long)arg1 ;
-(unsigned long long)lineCount;
-(long long)currentLineNumber;
-(void)setCurrentLineNumber:(long long)arg1 ;
-(char)partial;
-(void)setPartial:(char)arg1 ;
@end
