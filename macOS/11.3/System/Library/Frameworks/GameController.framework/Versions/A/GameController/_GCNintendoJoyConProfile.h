/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameController/GameController-Structs.h>
#import <libobjc.A.dylib/_GCDefaultDeviceManagerDelegate.h>
#import <libobjc.A.dylib/_GCControllerProfile.h>

@class NSString;

@interface _GCNintendoJoyConProfile : NSObject <_GCDefaultDeviceManagerDelegate, _GCControllerProfile> {

	char _leftJoyCon;
	char _rightJoyCon;

}

@property (getter=isLeftJoyCon,readonly) char leftJoyCon;                //@synthesize leftJoyCon=_leftJoyCon - In the implementation block
@property (getter=isRightJoyCon,readonly) char rightJoyCon;              //@synthesize rightJoyCon=_rightJoyCon - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)deviceManager;
-(char)isLeftJoyCon;
-(char)isRightJoyCon;
@end

