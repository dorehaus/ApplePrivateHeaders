/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol Core_Audio_Driver_Host_Callback_Delegate <NSObject>
@required
-(void)object_properties_changed:(unsigned)arg1 data:(id)arg2;
-(void)request_config_change:(unsigned)arg1 change_action:(unsigned long long)arg2 change_token:(unsigned long long)arg3;
-(int)write_storage_settings:(CFStringRef)arg1 storage_data:(void*)arg2;
-(pair<int, const void *>*)copy_storage_settings:(CFStringRef)arg1;
-(int)delete_storage_settings:(CFStringRef)arg1;

@end
