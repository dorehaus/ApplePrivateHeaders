/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:03 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/Network.framework/Versions/A/Network
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Network/Network-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NWPBAddressEndpoint, NWPBHostEndpoint, NWPBInterface, NWPBServiceEndpoint, NSData;

@interface NWPBEndpoint : PBCodable <NSCopying> {

	NWPBAddressEndpoint* _address;
	NWPBHostEndpoint* _host;
	NWPBInterface* _interface;
	NWPBServiceEndpoint* _service;
	NSData* _txtRecord;

}

@property (nonatomic,readonly) char hasAddress; 
@property (nonatomic,retain) NWPBAddressEndpoint * address;              //@synthesize address=_address - In the implementation block
@property (nonatomic,readonly) char hasHost; 
@property (nonatomic,retain) NWPBHostEndpoint * host;                    //@synthesize host=_host - In the implementation block
@property (nonatomic,readonly) char hasService; 
@property (nonatomic,retain) NWPBServiceEndpoint * service;              //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) char hasInterface; 
@property (nonatomic,retain) NWPBInterface * interface;                  //@synthesize interface=_interface - In the implementation block
@property (nonatomic,readonly) char hasTxtRecord; 
@property (nonatomic,retain) NSData * txtRecord;                         //@synthesize txtRecord=_txtRecord - In the implementation block
-(char)hasTxtRecord;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NWPBHostEndpoint *)host;
-(void)setHost:(NWPBHostEndpoint *)arg1 ;
-(id)dictionaryRepresentation;
-(NWPBAddressEndpoint *)address;
-(void)setAddress:(NWPBAddressEndpoint *)arg1 ;
-(NWPBServiceEndpoint *)service;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NWPBInterface *)interface;
-(NSData *)txtRecord;
-(void)setTxtRecord:(NSData *)arg1 ;
-(void)setService:(NWPBServiceEndpoint *)arg1 ;
-(void)setInterface:(NWPBInterface *)arg1 ;
-(char)hasAddress;
-(char)hasService;
-(char)hasInterface;
-(char)hasHost;
@end
