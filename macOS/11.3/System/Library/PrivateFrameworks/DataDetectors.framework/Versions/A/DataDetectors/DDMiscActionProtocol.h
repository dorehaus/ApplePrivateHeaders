/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:51 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DataDetectors.framework/Versions/A/DataDetectors
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol DDMiscActionProtocol
@optional
+(id)customRawMenuItemForContext:(id)arg1;
+(char)actionValidForDataDetectorsResult:(DDResultRef)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4;
+(id)localizedDynamicName;
+(char)prepareMenuItem:(id)arg1 result:(DDResultRef)arg2 url:(id)arg3 textCheckingResult:(id)arg4 context:(id)arg5;

@required
+(id)runActionWithResult:(DDResultRef)arg1 url:(id)arg2 textCheckingResult:(id)arg3 context:(id)arg4;
+(char)displaysNonModalUI;
+(char)requiresService;
+(char)requiresViewBridge;

@end
