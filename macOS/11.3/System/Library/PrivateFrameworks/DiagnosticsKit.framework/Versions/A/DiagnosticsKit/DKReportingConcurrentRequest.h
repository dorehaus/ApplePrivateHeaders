/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:47 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticsKit.framework/Versions/A/DiagnosticsKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class DKExtensionAdapter, NSMutableSet;

@interface DKReportingConcurrentRequest : NSObject {

	DKExtensionAdapter* _generator;
	NSMutableSet* _manifest;

}

@property (nonatomic,retain) DKExtensionAdapter * generator;              //@synthesize generator=_generator - In the implementation block
@property (nonatomic,retain) NSMutableSet * manifest;                     //@synthesize manifest=_manifest - In the implementation block
+(id)concurrentRequestWithGenerator:(id)arg1 ;
-(DKExtensionAdapter *)generator;
-(void)setGenerator:(DKExtensionAdapter *)arg1 ;
-(NSMutableSet *)manifest;
-(void)setManifest:(NSMutableSet *)arg1 ;
-(id)initWithGenerator:(id)arg1 ;
@end
