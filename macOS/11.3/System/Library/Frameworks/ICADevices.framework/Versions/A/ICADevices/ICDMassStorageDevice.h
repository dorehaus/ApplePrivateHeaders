/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:44 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/ICADevices.framework/Versions/A/ICADevices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ICADevices/ICDDevice.h>

@class NSString;

@interface ICDMassStorageDevice : ICDDevice {

	NSString* _diskBSDName;

}

@property (readonly) NSString * diskBSDName;              //@synthesize diskBSDName=_diskBSDName - In the implementation block
-(void)dealloc;
-(short)openDevice;
-(id)initWithDiskBSDName:(id)arg1 ;
-(void)updateDeviceDictionary:(id)arg1 ;
-(void)unregisterDevice;
-(void)registerDevice;
-(NSString *)diskBSDName;
@end

