/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <libobjc.A.dylib/NWPrettyDescription.h>

@protocol OS_nw_protocol_transform;
@class NSObject, NWEndpoint;

@interface NWProtocolTransform : NSObject <NWPrettyDescription> {

	NSObject*<OS_nw_protocol_transform> _internalTransform;

}

@property (retain) NSObject*<OS_nw_protocol_transform> internalTransform;              //@synthesize internalTransform=_internalTransform - In the implementation block
@property (assign,nonatomic) char noProxy; 
@property (assign,nonatomic) int multipathService; 
@property (nonatomic,copy) NWEndpoint * replacementEndpoint; 
@property (assign,nonatomic) char tfo; 
@property (assign,nonatomic) char tfoNoCookie; 
@property (assign,nonatomic) int dataMode; 
@property (assign,nonatomic) unsigned long long fallbackMode; 
@property (assign,nonatomic) char prohibitDirect; 
@property (assign,nonatomic) char disablePathFallback; 
-(id)descriptionWithIndent:(int)arg1 showFullContent:(char)arg2 ;
-(void)setMultipathService:(int)arg1 ;
-(int)multipathService;
-(char)fastOpenForceEnable;
-(void)setFastOpenForceEnable:(char)arg1 ;
-(char)noProxy;
-(void)setNoProxy:(char)arg1 ;
-(id)initWithCTransform:(id)arg1 ;
-(void)disableProtocol:(nw_protocol_identifier*)arg1 ;
-(void)clearProtocolsAtLevel:(int)arg1 ;
-(void)appendProtocol:(id)arg1 atLevel:(int)arg2 ;
-(unsigned long long)fallbackMode;
-(void)setFallbackMode:(unsigned long long)arg1 ;
-(char)prohibitDirect;
-(void)setProhibitDirect:(char)arg1 ;
-(void)setTfo:(char)arg1 ;
-(char)tfoNoCookie;
-(void)setTfoNoCookie:(char)arg1 ;
-(char)disablePathFallback;
-(void)setDisablePathFallback:(char)arg1 ;
-(NSObject*<OS_nw_protocol_transform>)internalTransform;
-(void)setInternalTransform:(NSObject*<OS_nw_protocol_transform>)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(char)tfo;
-(int)dataMode;
-(void)setDataMode:(int)arg1 ;
-(id)privateDescription;
-(void)setReplacementEndpoint:(NWEndpoint *)arg1 ;
-(NWEndpoint *)replacementEndpoint;
@end
