/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AutoBugCaptureCore.framework/Versions/A/AutoBugCaptureCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSString;

@interface PrimaryInterfaceUtils : NSObject {

	char _hasPrimaryInterface;
	NSDate* _interfaceBecamePrimaryDate;
	NSDate* _estimatedInterfaceBecamePrimaryDate;
	long long _primaryInterfaceType;

}

@property (nonatomic,readonly) char hasPrimaryInterface;                                  //@synthesize hasPrimaryInterface=_hasPrimaryInterface - In the implementation block
@property (nonatomic,readonly) long long primaryInterfaceType;                            //@synthesize primaryInterfaceType=_primaryInterfaceType - In the implementation block
@property (nonatomic,readonly) NSString * primaryInterfaceTypeString; 
@property (nonatomic,readonly) NSDate * interfaceBecamePrimaryDate;                       //@synthesize interfaceBecamePrimaryDate=_interfaceBecamePrimaryDate - In the implementation block
@property (nonatomic,readonly) NSDate * estimatedInterfaceBecamePrimaryDate;              //@synthesize estimatedInterfaceBecamePrimaryDate=_estimatedInterfaceBecamePrimaryDate - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSDate *)interfaceBecamePrimaryDate;
-(long long)primaryInterfaceType;
-(void)_setHasPrimaryInterface:(char)arg1 ;
-(void)_setPrimaryInterfaceType:(long long)arg1 ;
-(void)_setInterfaceBecamePrimaryDate:(id)arg1 ;
-(void)_setEstimatedInterfaceBecamePrimaryDate:(id)arg1 ;
-(void)getDefaultPathInfoUsingSecondsSinceChange;
-(char)hasPrimaryInterface;
-(NSDate *)estimatedInterfaceBecamePrimaryDate;
-(NSString *)primaryInterfaceTypeString;
@end

