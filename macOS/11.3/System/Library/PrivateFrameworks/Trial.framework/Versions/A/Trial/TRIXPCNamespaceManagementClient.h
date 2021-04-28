/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:55 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/Trial.framework/Versions/A/Trial
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libobjc.A.dylib/TRINamespaceManagementProtocol.h>

@class _PASXPCClientHelper;

@interface TRIXPCNamespaceManagementClient : NSObject <TRINamespaceManagementProtocol> {

	_PASXPCClientHelper* _helper;

}
-(id)init;
-(char)registerNamespaceWithNamespaceName:(id)arg1 compatibilityVersion:(unsigned)arg2 defaultsFileURL:(id)arg3 applicationGroup:(id)arg4 cloudKitContainerId:(int)arg5 error:(id*)arg6 ;
-(char)startNamespaceDownloadWithName:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)startDownloadLevelsForFactors:(id)arg1 withNamespace:(id)arg2 options:(id)arg3 error:(id*)arg4 ;
-(char)deregisterNamespaceWithNamespaceName:(id)arg1 error:(id*)arg2 ;
@end
