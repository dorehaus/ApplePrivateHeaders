/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:49 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/Versions/A/DeviceManagement
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Catalyst/CATTaskResultObject.h>

@class NSArray;

@interface DMFFetchDeclarationCapabilitiesResultObject : CATTaskResultObject {

	NSArray* _supportedCommands;
	NSArray* _supportedAssets;
	NSArray* _supportedConfigurations;
	NSArray* _supportedEvents;
	NSArray* _supportedActivations;
	NSArray* _supportedPredicates;
	NSArray* _supportedMessages;

}

@property (nonatomic,copy) NSArray * supportedCommands;                    //@synthesize supportedCommands=_supportedCommands - In the implementation block
@property (nonatomic,copy) NSArray * supportedAssets;                      //@synthesize supportedAssets=_supportedAssets - In the implementation block
@property (nonatomic,copy) NSArray * supportedConfigurations;              //@synthesize supportedConfigurations=_supportedConfigurations - In the implementation block
@property (nonatomic,copy) NSArray * supportedEvents;                      //@synthesize supportedEvents=_supportedEvents - In the implementation block
@property (nonatomic,copy) NSArray * supportedActivations;                 //@synthesize supportedActivations=_supportedActivations - In the implementation block
@property (nonatomic,copy) NSArray * supportedPredicates;                  //@synthesize supportedPredicates=_supportedPredicates - In the implementation block
@property (nonatomic,copy) NSArray * supportedMessages;                    //@synthesize supportedMessages=_supportedMessages - In the implementation block
+(char)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)supportedCommands;
-(void)setSupportedCommands:(NSArray *)arg1 ;
-(NSArray *)supportedMessages;
-(void)setSupportedMessages:(NSArray *)arg1 ;
-(NSArray *)supportedAssets;
-(NSArray *)supportedConfigurations;
-(NSArray *)supportedEvents;
-(NSArray *)supportedActivations;
-(NSArray *)supportedPredicates;
-(void)setSupportedAssets:(NSArray *)arg1 ;
-(void)setSupportedConfigurations:(NSArray *)arg1 ;
-(void)setSupportedEvents:(NSArray *)arg1 ;
-(void)setSupportedActivations:(NSArray *)arg1 ;
-(void)setSupportedPredicates:(NSArray *)arg1 ;
@end

