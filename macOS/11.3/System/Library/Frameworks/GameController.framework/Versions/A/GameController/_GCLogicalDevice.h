/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:33 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class _GCDeviceConfiguration, NSSet;


@protocol _GCLogicalDevice <_GCDevice>
@property (readonly) _GCDeviceConfiguration * configuration; 
@property (readonly) NSSet * underlyingDevices; 
@optional
-(void)deactivateLogical;
-(void)activateLogical;

@required
-(_GCDeviceConfiguration *)configuration;
-(NSSet *)underlyingDevices;

@end
