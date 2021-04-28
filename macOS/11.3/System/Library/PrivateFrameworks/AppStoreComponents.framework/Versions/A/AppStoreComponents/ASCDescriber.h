/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:46 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AppStoreComponents.framework/Versions/A/AppStoreComponents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol NSObject;
@class NSMutableArray;

@interface ASCDescriber : NSObject {

	id<NSObject> _object;
	NSMutableArray* _properties;

}

@property (nonatomic,readonly) id<NSObject> object;                      //@synthesize object=_object - In the implementation block
@property (nonatomic,readonly) NSMutableArray * properties;              //@synthesize properties=_properties - In the implementation block
+(id)nilObject;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)initWithObject:(id)arg1 ;
-(id<NSObject>)object;
-(NSMutableArray *)properties;
-(void)addObject:(id)arg1 withName:(id)arg2 ;
-(void)addSensitiveObject:(id)arg1 withName:(id)arg2 ;
-(id)finalizeDescription;
-(id)describeObject;
-(id)describeProperties;
-(void)addBool:(char)arg1 withName:(id)arg2 ;
-(void)addInteger:(long long)arg1 withName:(id)arg2 ;
-(void)addUnsignedInteger:(unsigned long long)arg1 withName:(id)arg2 ;
-(void)addInt64:(long long)arg1 withName:(id)arg2 ;
-(void)addUInt64:(unsigned long long)arg1 withName:(id)arg2 ;
-(void)addDouble:(double)arg1 withName:(id)arg2 ;
@end

