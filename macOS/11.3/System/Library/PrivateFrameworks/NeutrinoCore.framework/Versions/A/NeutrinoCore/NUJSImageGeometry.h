/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:17 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/Versions/A/NeutrinoCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NeutrinoCore/NeutrinoCore-Structs.h>
#import <NeutrinoCore/NUJSProxy.h>
#import <libobjc.A.dylib/NUJSImageGeometryExport.h>

@class NUJSScale, NUImageGeometry;

@interface NUJSImageGeometry : NUJSProxy <NUJSImageGeometryExport>

@property (readonly) NUImageGeometry * geometry; 
@property (readonly) CGRect extent; 
@property (readonly) CGSize size; 
@property (readonly) CGSize scaledSize; 
@property (readonly) NUJSScale * scale; 
@property (readonly) long long orientation; 
-(CGSize)size;
-(NUJSScale *)scale;
-(long long)orientation;
-(CGRect)extent;
-(NUImageGeometry *)geometry;
-(CGSize)scaledSize;
-(id)initWithRepresentedObject:(id)arg1 context:(id)arg2 ;
-(id)initWithGeometry:(id)arg1 context:(id)arg2 ;
@end

