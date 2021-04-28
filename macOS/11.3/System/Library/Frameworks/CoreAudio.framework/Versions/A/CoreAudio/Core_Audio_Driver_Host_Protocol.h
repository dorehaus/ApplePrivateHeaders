/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol Core_Audio_Driver_Host_Protocol
@required
-(void)object_properties_changed:(unsigned)arg1 properties_data:(id)arg2 reply:(/*^block*/id)arg3;
-(void)request_config_change:(unsigned)arg1 change_action:(unsigned long long)arg2 reply:(/*^block*/id)arg3;
-(void)write_storage_settings:(id)arg1 storage_data:(id)arg2 reply:(/*^block*/id)arg3;
-(void)copy_storage_settings:(id)arg1 reply:(/*^block*/id)arg2;
-(void)delete_storage_settings:(id)arg1 reply:(/*^block*/id)arg2;

@end
