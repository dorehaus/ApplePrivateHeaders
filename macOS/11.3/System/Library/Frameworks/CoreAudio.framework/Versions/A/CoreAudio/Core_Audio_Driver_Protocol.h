/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:50:56 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/CoreAudio.framework/Versions/A/CoreAudio
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol Core_Audio_Driver_Protocol
@required
-(void)initialize:(id)arg1 reply:(/*^block*/id)arg2;
-(void)set_property_data:(Driver_Property_Identity)arg1 qualifier:(id)arg2 data:(id)arg3 reply:(/*^block*/id)arg4;
-(void)get_property_data:(Driver_Property_Identity)arg1 qualifier:(id)arg2 data_size:(unsigned)arg3 reply:(/*^block*/id)arg4;
-(void)get_property_data_size:(Driver_Property_Identity)arg1 qualifier:(id)arg2 reply:(/*^block*/id)arg3;
-(void)is_property_settable:(Driver_Property_Identity)arg1 reply:(/*^block*/id)arg2;
-(void)has_property:(Driver_Property_Identity)arg1 reply:(/*^block*/id)arg2;
-(void)unregister_io_buffer:(id)arg1 reply:(/*^block*/id)arg2;
-(void)register_io_buffer:(id)arg1 reply:(/*^block*/id)arg2;
-(void)retain_reply_for_process_boost:(/*^block*/id)arg1;
-(void)stop_synchronous_messenger:(unsigned)arg1 client_id:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)start_synchronous_messenger:(unsigned)arg1 client_id:(unsigned)arg2 nominal_sample_rate:(double)arg3 io_buffer_frame_size:(unsigned)arg4 reply:(/*^block*/id)arg5;
-(void)stop_io:(unsigned)arg1 client_id:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)start_io:(unsigned)arg1 client_id:(unsigned)arg2 reply:(/*^block*/id)arg3;
-(void)destroy_device:(unsigned)arg1 reply:(/*^block*/id)arg2;
-(void)create_device:(id)arg1 client_info:(id)arg2 reply:(/*^block*/id)arg3;
-(void)remove_device_client:(unsigned)arg1 client_info:(id)arg2 reply:(/*^block*/id)arg3;
-(void)add_device_client:(unsigned)arg1 client_info:(id)arg2 io_messenger:(id)arg3 work_group:(id)arg4 reply:(/*^block*/id)arg5;
-(void)abort_device_configuration_change:(unsigned)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(/*^block*/id)arg4;
-(void)perform_device_configuration_change:(unsigned)arg1 action:(unsigned long long)arg2 change:(unsigned long long)arg3 reply:(/*^block*/id)arg4;

@end
