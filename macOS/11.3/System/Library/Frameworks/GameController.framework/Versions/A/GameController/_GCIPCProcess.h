/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/GameController.framework/Versions/A/GameController
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSString, NSArray;


@protocol _GCIPCProcess
@property (readonly) SCD_Struct_GC21 auditToken; 
@property (readonly) int auditSessionIdentifier; 
@property (readonly) int processIdentifier; 
@property (readonly) unsigned effectiveUserIdentifier; 
@property (readonly) unsigned effectiveGroupIdentifier; 
@property (readonly) NSString * bundleIdentifier; 
@property (readonly) NSArray * connections; 
@required
-(NSString *)bundleIdentifier;
-(int)processIdentifier;
-(SCD_Struct_GC21)auditToken;
-(unsigned)effectiveUserIdentifier;
-(int)auditSessionIdentifier;
-(unsigned)effectiveGroupIdentifier;
-(NSArray *)connections;

@end
