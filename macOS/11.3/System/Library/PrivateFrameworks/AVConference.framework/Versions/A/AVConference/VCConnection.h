/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AVConference/AVConference-Structs.h>
@class NSDictionary;

@interface VCConnection : NSObject {

	NSDictionary* _connectionSelectionPriorities;

}
-(void)dealloc;
-(id)init;
-(long long)compare:(id)arg1 isPrimary:(char)arg2 selectionPolicy:(SCD_Struct_VC93*)arg3 ;
-(id)getConnectionSelectionPriorities;
-(long long)compareInterfacePriority:(id)arg1 isPrimary:(char)arg2 ;
-(long long)compareConnectionTypePriority:(id)arg1 selectionPolicy:(SCD_Struct_VC93*)arg2 ;
-(long long)compareIpVersionPriority:(id)arg1 selectionPolicy:(SCD_Struct_VC93*)arg2 ;
-(long long)compareVpnPriority:(id)arg1 selectionPolicy:(SCD_Struct_VC93*)arg2 ;
@end
