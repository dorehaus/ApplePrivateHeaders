/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ViewBridge.framework/Versions/A/ViewBridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ViewBridge/ViewBridge-Structs.h>
#import <libobjc.A.dylib/AuxiliaryCallsClient.h>

@interface NSRemoteViewHostAppExportedObject : NSObject <AuxiliaryCallsClient>
-(void)requestUserInteractionWithPatience:(double)arg1 options:(unsigned long long)arg2 sender:(ProcessSerialNumber)arg3 reply:(/*^block*/id)arg4 ;
-(void)addFreeWindow:(SCD_Struct_NS23)arg1 identifier:(id)arg2 listenerEndpoint:(id)arg3 reply:(/*^block*/id)arg4 ;
-(int)_requestUserInteractionWithPatience:(double)arg1 options:(unsigned long long)arg2 sender:(ProcessSerialNumber)arg3 reply:(/*^block*/id)arg4 ;
-(void)retrievePreviewEndpoint:(/*^block*/id)arg1 ;
@end
