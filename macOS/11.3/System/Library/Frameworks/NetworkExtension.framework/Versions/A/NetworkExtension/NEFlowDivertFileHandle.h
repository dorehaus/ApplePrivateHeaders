/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:09 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NEFileHandle.h>

@class NSNumber, NSData;

@interface NEFlowDivertFileHandle : NEFileHandle {

	NSNumber* _controlUnit;
	NSData* _keyMaterial;

}

@property (readonly) NSNumber * controlUnit;              //@synthesize controlUnit=_controlUnit - In the implementation block
@property (readonly) NSData * keyMaterial;                //@synthesize keyMaterial=_keyMaterial - In the implementation block
-(id)getUnitForSocket:(int)arg1 ;
-(id)description;
-(unsigned long long)type;
-(id)dictionary;
-(id)initFromDictionary:(id)arg1 ;
-(id)initFlowDivertControlSocket;
-(NSNumber *)controlUnit;
-(NSData *)keyMaterial;
-(id)initFlowDivertControlSocketDisableAppMap:(char)arg1 ;
-(id)initFlowDivertDataSocket;
@end

