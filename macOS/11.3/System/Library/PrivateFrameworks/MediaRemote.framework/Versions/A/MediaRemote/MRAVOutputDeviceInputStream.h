/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:38 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/Versions/A/MediaRemote
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaRemote/MRAVBufferedInputStream.h>
#import <libobjc.A.dylib/AVOutputDeviceCommunicationChannelDelegate.h>

@class AVOutputDevice, NSString;

@interface MRAVOutputDeviceInputStream : MRAVBufferedInputStream <AVOutputDeviceCommunicationChannelDelegate> {

	AVOutputDevice* _outputDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)description;
-(id)initWithData:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(void)outputDevice:(id)arg1 didReceiveData:(id)arg2 fromCommunicationChannel:(id)arg3 ;
-(void)outputDevice:(id)arg1 didCloseCommunicationChannel:(id)arg2 ;
-(id)initWithOutputDevice:(id)arg1 ;
@end

