/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:45 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/Versions/A/OfficeImport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class EDResources, NSMutableArray, NSString;

@interface EDConditionalFormattingRule : NSObject {

	EDResources* mResources;
	int mType;
	int mOperator;
	NSMutableArray* mFormulas;
	unsigned long long mDifferentialStyleIndex;
	BOOL mStopIfTrue;
	BOOL mAppliesToDateOnly;
	long long mPriority;
	BOOL mAboveAverage;
	BOOL mBottom;
	BOOL mEqualAverage;
	BOOL mPercent;
	unsigned long long mRank;
	long long mStdDev;
	NSString* mText;
	int mTimePeriod;

}
+(id)conditionalFormattingRuleWithResources:(id)arg1 ;
-(id)description;
-(void)setType:(int)arg1 ;
-(int)type;
-(void)setPriority:(long long)arg1 ;
-(long long)priority;
-(id)text;
-(BOOL)bottom;
-(void)setRank:(unsigned long long)arg1 ;
-(unsigned long long)rank;
-(id)initWithResources:(id)arg1 ;
-(void)setText:(id)arg1 ;
-(void)setBottom:(BOOL)arg1 ;
-(BOOL)percent;
-(unsigned long long)formulaCount;
-(id)formulaAtIndex:(unsigned long long)arg1 ;
-(void)setStopIfTrue:(BOOL)arg1 ;
-(void)setOperatorEnum:(int)arg1 ;
-(void)addFormula:(id)arg1 worksheet:(id)arg2 ;
-(void)setDifferentialStyle:(id)arg1 ;
-(id)differentialStyle;
-(BOOL)appliesToDateOnly;
-(long long)compareToOtherRuleUsingPriority:(id)arg1 ;
-(int)operatorEnum;
-(BOOL)stopIfTrue;
-(BOOL)aboveAverage;
-(BOOL)equalAverage;
-(long long)stdDev;
-(int)timePeriod;
-(void)setAppliesToDateOnly:(BOOL)arg1 ;
-(unsigned long long)differentialStyleIndex;
-(void)setDifferentialStyleIndex:(unsigned long long)arg1 ;
-(void)setAboveAverage:(BOOL)arg1 ;
-(void)setEqualAverage:(BOOL)arg1 ;
-(void)setPercent:(BOOL)arg1 ;
-(void)setStdDev:(long long)arg1 ;
-(void)setTimePeriod:(int)arg1 ;
@end

