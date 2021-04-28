/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:42 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/XCTAutomationSupport.framework/Versions/A/XCTAutomationSupport
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSMutableDictionary, XCTCapabilities;

@interface XCTCapabilitiesBuilder : NSObject {

	NSMutableDictionary* _capabilitiesDictionary;

}

@property (copy,readonly) NSMutableDictionary * capabilitiesDictionary;              //@synthesize capabilitiesDictionary=_capabilitiesDictionary - In the implementation block
@property (copy,readonly) XCTCapabilities * capabilities; 
+(id)capabilitiesFromProvider:(Class)arg1 ;
-(id)init;
-(XCTCapabilities *)capabilities;
-(void)registerCapability:(id)arg1 ;
-(void)registerCapability:(id)arg1 version:(unsigned long long)arg2 ;
-(void)upgradeCapability:(id)arg1 toVersion:(unsigned long long)arg2 ;
-(NSMutableDictionary *)capabilitiesDictionary;
@end

