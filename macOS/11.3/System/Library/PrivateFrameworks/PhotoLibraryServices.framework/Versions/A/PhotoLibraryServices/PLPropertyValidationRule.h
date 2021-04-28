/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:02 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/Versions/A/PhotoLibraryServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSString, NSArray;

@interface PLPropertyValidationRule : NSObject {

	long long _type;
	NSString* _keyPath;
	id<NSObject> _expectedValue;
	id<NSObject> _expectedValueRangeLow;
	id<NSObject> _expectedValueRangeHigh;
	NSArray* _expectedValues;

}

@property (assign,nonatomic) long long type;                                   //@synthesize type=_type - In the implementation block
@property (nonatomic,copy) NSString * keyPath;                                 //@synthesize keyPath=_keyPath - In the implementation block
@property (nonatomic,retain) id<NSObject> expectedValue;                       //@synthesize expectedValue=_expectedValue - In the implementation block
@property (nonatomic,retain) id<NSObject> expectedValueRangeLow;               //@synthesize expectedValueRangeLow=_expectedValueRangeLow - In the implementation block
@property (nonatomic,retain) id<NSObject> expectedValueRangeHigh;              //@synthesize expectedValueRangeHigh=_expectedValueRangeHigh - In the implementation block
@property (nonatomic,retain) NSArray * expectedValues;                         //@synthesize expectedValues=_expectedValues - In the implementation block
-(void)setType:(long long)arg1 ;
-(long long)type;
-(id)predicate;
-(NSString *)keyPath;
-(void)setKeyPath:(NSString *)arg1 ;
-(id)keyPaths;
-(id)reverseRule;
-(id)currentValuesOfObject:(id)arg1 ;
-(id<NSObject>)expectedValue;
-(id<NSObject>)expectedValueRangeLow;
-(id<NSObject>)expectedValueRangeHigh;
-(NSArray *)expectedValues;
-(char)evaluateWithObject:(id)arg1 outMessage:(id*)arg2 ;
-(id)descriptionOfCurrentValuesOfObject:(id)arg1 ;
-(void)setExpectedValue:(id<NSObject>)arg1 ;
-(void)setExpectedValueRangeLow:(id<NSObject>)arg1 ;
-(void)setExpectedValueRangeHigh:(id<NSObject>)arg1 ;
-(void)setExpectedValues:(NSArray *)arg1 ;
@end

