/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:15 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/Versions/A/TextInputCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSObject;

@interface TIFieldDescriptor : NSObject {

	NSString* _fieldName;
	NSString* _fieldDescription;
	NSString* _metricName;
	NSString* _metricType;
	NSObject* _inactiveValue;

}

@property (nonatomic,readonly) NSString * fieldName;                     //@synthesize fieldName=_fieldName - In the implementation block
@property (nonatomic,readonly) NSString * fieldDescription;              //@synthesize fieldDescription=_fieldDescription - In the implementation block
@property (nonatomic,readonly) NSString * metricName;                    //@synthesize metricName=_metricName - In the implementation block
@property (nonatomic,readonly) NSString * metricType;                    //@synthesize metricType=_metricType - In the implementation block
@property (nonatomic,readonly) NSObject * inactiveValue;                 //@synthesize inactiveValue=_inactiveValue - In the implementation block
+(id)fieldDescriptorWithFieldName:(id)arg1 fieldDescription:(id)arg2 metricName:(id)arg3 metricType:(id)arg4 inactiveValue:(id)arg5 ;
-(NSString *)fieldName;
-(NSString *)metricName;
-(NSString *)metricType;
-(id)initWithFieldName:(id)arg1 fieldDescription:(id)arg2 metricName:(id)arg3 metricType:(id)arg4 inactiveValue:(id)arg5 ;
-(NSString *)fieldDescription;
-(NSObject *)inactiveValue;
@end

