/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:27 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/Versions/A/PhotosGraph
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/PGMeaningCriteria.h>

@class NSArray, NSString;

@interface PGMeaningPartsOfDayCriteria : NSObject <PGMeaningCriteria> {

	NSArray* _positiveSignificantPartsOfDay;
	NSArray* _positiveSignificantPartsOfDayStrings;
	NSArray* _negativeSignificantPartsOfDay;
	NSArray* _negativeSignificantPartsOfDayStrings;
	NSArray* _positivePartsOfDay;
	NSArray* _positivePartsOfDayStrings;
	NSArray* _negativePartsOfDay;
	NSArray* _negativePartsOfDayStrings;

}

@property (nonatomic,retain) NSArray * positiveSignificantPartsOfDay;                     //@synthesize positiveSignificantPartsOfDay=_positiveSignificantPartsOfDay - In the implementation block
@property (nonatomic,retain) NSArray * positiveSignificantPartsOfDayStrings;              //@synthesize positiveSignificantPartsOfDayStrings=_positiveSignificantPartsOfDayStrings - In the implementation block
@property (nonatomic,retain) NSArray * negativeSignificantPartsOfDay;                     //@synthesize negativeSignificantPartsOfDay=_negativeSignificantPartsOfDay - In the implementation block
@property (nonatomic,retain) NSArray * negativeSignificantPartsOfDayStrings;              //@synthesize negativeSignificantPartsOfDayStrings=_negativeSignificantPartsOfDayStrings - In the implementation block
@property (nonatomic,retain) NSArray * positivePartsOfDay;                                //@synthesize positivePartsOfDay=_positivePartsOfDay - In the implementation block
@property (nonatomic,retain) NSArray * positivePartsOfDayStrings;                         //@synthesize positivePartsOfDayStrings=_positivePartsOfDayStrings - In the implementation block
@property (nonatomic,retain) NSArray * negativePartsOfDay;                                //@synthesize negativePartsOfDay=_negativePartsOfDay - In the implementation block
@property (nonatomic,retain) NSArray * negativePartsOfDayStrings;                         //@synthesize negativePartsOfDayStrings=_negativePartsOfDayStrings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)criteriaKey;
+(id)criteriaWithDictionary:(id)arg1 ;
+(id)_partsOfDayAsNumbersFromStrings:(id)arg1 ;
+(id)_partsOfDayNumbersByString;
-(NSString *)description;
-(char)isValid;
-(char)passesForMomentNode:(id)arg1 ;
-(void)setNegativePartsOfDay:(NSArray *)arg1 ;
-(void)setNegativePartsOfDayStrings:(NSArray *)arg1 ;
-(void)setPositivePartsOfDay:(NSArray *)arg1 ;
-(void)setPositivePartsOfDayStrings:(NSArray *)arg1 ;
-(void)setNegativeSignificantPartsOfDay:(NSArray *)arg1 ;
-(void)setNegativeSignificantPartsOfDayStrings:(NSArray *)arg1 ;
-(void)setPositiveSignificantPartsOfDay:(NSArray *)arg1 ;
-(void)setPositiveSignificantPartsOfDayStrings:(NSArray *)arg1 ;
-(char)_passesPartsOfDayWithMomentNodePartsOfDay:(unsigned long long)arg1 positivePartsOfDay:(id)arg2 negativePartsOfDay:(id)arg3 ;
-(NSArray *)positiveSignificantPartsOfDay;
-(NSArray *)positiveSignificantPartsOfDayStrings;
-(NSArray *)negativeSignificantPartsOfDay;
-(NSArray *)negativeSignificantPartsOfDayStrings;
-(NSArray *)positivePartsOfDay;
-(NSArray *)positivePartsOfDayStrings;
-(NSArray *)negativePartsOfDay;
-(NSArray *)negativePartsOfDayStrings;
@end
