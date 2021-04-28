/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:34 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DuetActivityScheduler.framework/Versions/A/DuetActivityScheduler
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_DASRemoteExtensionContextProtocol.h>

@protocol OS_os_log;
@class NSObject, _DASExtension, NSString;

@interface _DASExtensionRemoteContext : NSExtensionContext <_DASRemoteExtensionContextProtocol> {

	NSObject*<OS_os_log> _log;

}

@property (nonatomic,retain) NSObject*<OS_os_log> log;              //@synthesize log=_log - In the implementation block
@property (readonly) _DASExtension * extension; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_extensionAuxiliaryHostProtocol;
+(id)_extensionAuxiliaryVendorProtocol;
+(id)extensionRunnerClassAllowList;
-(id)init;
-(void)suspend;
-(_DASExtension *)extension;
-(NSObject*<OS_os_log>)log;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id)hostContextWithError:(id*)arg1 ;
-(void)performActivity:(id)arg1 ;
-(id)createExtensionRunnerWithClassName:(id)arg1 ;
@end
