/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:12 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/Versions/A/AVConference
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AVConference/AVConference-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VCMediaNegotiationBlobMomentsSettings : PBCodable <NSCopying> {

	unsigned _capabilities;
	unsigned _multiwayCapabilities;
	unsigned _supportedImageTypes;
	unsigned _supportedVideoCodecs;
	SCD_Struct_VC64 _has;

}

@property (assign,nonatomic) unsigned capabilities;                      //@synthesize capabilities=_capabilities - In the implementation block
@property (assign,nonatomic) char hasSupportedVideoCodecs; 
@property (assign,nonatomic) unsigned supportedVideoCodecs;              //@synthesize supportedVideoCodecs=_supportedVideoCodecs - In the implementation block
@property (assign,nonatomic) char hasSupportedImageTypes; 
@property (assign,nonatomic) unsigned supportedImageTypes;               //@synthesize supportedImageTypes=_supportedImageTypes - In the implementation block
@property (assign,nonatomic) char hasMultiwayCapabilities; 
@property (assign,nonatomic) unsigned multiwayCapabilities;              //@synthesize multiwayCapabilities=_multiwayCapabilities - In the implementation block
+(unsigned)avcMomentsCapabilitiesForMultiwayMomentsCapabilities:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)dictionaryRepresentation;
-(unsigned)capabilities;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setCapabilities:(unsigned)arg1 ;
-(unsigned)supportedImageTypes;
-(void)setSupportedVideoCodecs:(unsigned)arg1 ;
-(void)setHasSupportedVideoCodecs:(char)arg1 ;
-(char)hasSupportedVideoCodecs;
-(void)setSupportedImageTypes:(unsigned)arg1 ;
-(void)setHasSupportedImageTypes:(char)arg1 ;
-(char)hasSupportedImageTypes;
-(void)setMultiwayCapabilities:(unsigned)arg1 ;
-(void)setHasMultiwayCapabilities:(char)arg1 ;
-(char)hasMultiwayCapabilities;
-(unsigned)supportedVideoCodecs;
-(unsigned)multiwayCapabilities;
-(id)newVideoCodecSet;
-(id)initWithVideoCodecs:(id)arg1 imageTypes:(id)arg2 ;
-(id)newImageTypeSet;
@end
