/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:48 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/ISSupport.framework/Versions/A/ISSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <ISSupport/ISS_DAVRequest.h>

@interface ISS_DMDAVPropertiesRequest : ISS_DAVRequest
+(id)propPatchWithSession:(id)arg1 URI:(id)arg2 updatingProps:(id)arg3 inNameSpace:(id)arg4 withContext:(id)arg5 ;
+(id)propFindRequestWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 ;
-(void)_initForPropFindWithDepth:(id)arg1 lookingForProps:(id)arg2 ;
-(id)initPropPatchWithSession:(id)arg1 URI:(id)arg2 updatingProps:(id)arg3 inNameSpace:(id)arg4 withContext:(id)arg5 ;
-(void)_initForPropPatchUpdatingProps:(id)arg1 inNameSpace:(id)arg2 withContext:(id)arg3 ;
-(id)initPropFindWithSession:(id)arg1 withDepth:(id)arg2 URI:(id)arg3 lookingForProps:(id)arg4 ;
@end

