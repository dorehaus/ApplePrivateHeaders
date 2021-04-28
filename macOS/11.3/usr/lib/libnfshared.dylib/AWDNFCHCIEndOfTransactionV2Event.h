/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:04 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /usr/lib/libnfshared.dylib
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <libnfshared.dylib/libnfshared.dylib-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSData;

@interface AWDNFCHCIEndOfTransactionV2Event : PBCodable <NSCopying> {

	unsigned long long _timeDeltaFromReference;
	unsigned long long _timestamp;
	unsigned _accessUniversityCode;
	NSData* _aid;
	unsigned _avgRSSIValue;
	unsigned _command;
	unsigned _commandParam1;
	unsigned _commandResult;
	unsigned _currencyCode;
	unsigned _endEventInterface;
	unsigned _expressType;
	unsigned _informative;
	unsigned _issuerCityCode;
	unsigned _localValidation;
	unsigned _maxRSSIValue;
	unsigned _minRSSIValue;
	unsigned _multiTagState;
	unsigned _sfiRead;
	unsigned _sfiUpdated;
	unsigned _spid;
	NSData* _stationID;
	NSData* _terminalIdentifier;
	unsigned _totalRSSISamples;
	unsigned _transactionCategory;
	unsigned _transactionExtension;
	NSData* _transactionId;
	unsigned _transactionInProgress;
	unsigned _transactionStatus;
	unsigned _transactionType;
	NSData* _uuidReference;
	unsigned _version;
	char _hasExpiryDate;
	char _isBlacklisted;
	SCD_Struct_AW4 _has;

}

@property (assign,nonatomic) char hasTimestamp; 
@property (assign,nonatomic) unsigned long long timestamp;                           //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) char hasVersion; 
@property (assign,nonatomic) unsigned version;                                       //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) char hasAid; 
@property (nonatomic,retain) NSData * aid;                                           //@synthesize aid=_aid - In the implementation block
@property (assign,nonatomic) char hasCommand; 
@property (assign,nonatomic) unsigned command;                                       //@synthesize command=_command - In the implementation block
@property (assign,nonatomic) char hasCommandParam1; 
@property (assign,nonatomic) unsigned commandParam1;                                 //@synthesize commandParam1=_commandParam1 - In the implementation block
@property (assign,nonatomic) char hasCommandResult; 
@property (assign,nonatomic) unsigned commandResult;                                 //@synthesize commandResult=_commandResult - In the implementation block
@property (assign,nonatomic) char hasCurrencyCode; 
@property (assign,nonatomic) unsigned currencyCode;                                  //@synthesize currencyCode=_currencyCode - In the implementation block
@property (assign,nonatomic) char hasExpressType; 
@property (assign,nonatomic) unsigned expressType;                                   //@synthesize expressType=_expressType - In the implementation block
@property (assign,nonatomic) char hasHasExpiryDate; 
@property (assign,nonatomic) char hasExpiryDate;                                     //@synthesize hasExpiryDate=_hasExpiryDate - In the implementation block
@property (assign,nonatomic) char hasInformative; 
@property (assign,nonatomic) unsigned informative;                                   //@synthesize informative=_informative - In the implementation block
@property (assign,nonatomic) char hasIsBlacklisted; 
@property (assign,nonatomic) char isBlacklisted;                                     //@synthesize isBlacklisted=_isBlacklisted - In the implementation block
@property (assign,nonatomic) char hasSpid; 
@property (assign,nonatomic) unsigned spid;                                          //@synthesize spid=_spid - In the implementation block
@property (nonatomic,readonly) char hasStationID; 
@property (nonatomic,retain) NSData * stationID;                                     //@synthesize stationID=_stationID - In the implementation block
@property (assign,nonatomic) char hasTransactionStatus; 
@property (assign,nonatomic) unsigned transactionStatus;                             //@synthesize transactionStatus=_transactionStatus - In the implementation block
@property (assign,nonatomic) char hasTransactionCategory; 
@property (assign,nonatomic) unsigned transactionCategory;                           //@synthesize transactionCategory=_transactionCategory - In the implementation block
@property (assign,nonatomic) char hasTransactionType; 
@property (assign,nonatomic) unsigned transactionType;                               //@synthesize transactionType=_transactionType - In the implementation block
@property (assign,nonatomic) char hasTransactionExtension; 
@property (assign,nonatomic) unsigned transactionExtension;                          //@synthesize transactionExtension=_transactionExtension - In the implementation block
@property (assign,nonatomic) char hasTransactionInProgress; 
@property (assign,nonatomic) unsigned transactionInProgress;                         //@synthesize transactionInProgress=_transactionInProgress - In the implementation block
@property (nonatomic,readonly) char hasTerminalIdentifier; 
@property (nonatomic,retain) NSData * terminalIdentifier;                            //@synthesize terminalIdentifier=_terminalIdentifier - In the implementation block
@property (assign,nonatomic) char hasTimeDeltaFromReference; 
@property (assign,nonatomic) unsigned long long timeDeltaFromReference;              //@synthesize timeDeltaFromReference=_timeDeltaFromReference - In the implementation block
@property (nonatomic,readonly) char hasUuidReference; 
@property (nonatomic,retain) NSData * uuidReference;                                 //@synthesize uuidReference=_uuidReference - In the implementation block
@property (assign,nonatomic) char hasTotalRSSISamples; 
@property (assign,nonatomic) unsigned totalRSSISamples;                              //@synthesize totalRSSISamples=_totalRSSISamples - In the implementation block
@property (assign,nonatomic) char hasAvgRSSIValue; 
@property (assign,nonatomic) unsigned avgRSSIValue;                                  //@synthesize avgRSSIValue=_avgRSSIValue - In the implementation block
@property (assign,nonatomic) char hasMaxRSSIValue; 
@property (assign,nonatomic) unsigned maxRSSIValue;                                  //@synthesize maxRSSIValue=_maxRSSIValue - In the implementation block
@property (assign,nonatomic) char hasMinRSSIValue; 
@property (assign,nonatomic) unsigned minRSSIValue;                                  //@synthesize minRSSIValue=_minRSSIValue - In the implementation block
@property (assign,nonatomic) char hasLocalValidation; 
@property (assign,nonatomic) unsigned localValidation;                               //@synthesize localValidation=_localValidation - In the implementation block
@property (assign,nonatomic) char hasAccessUniversityCode; 
@property (assign,nonatomic) unsigned accessUniversityCode;                          //@synthesize accessUniversityCode=_accessUniversityCode - In the implementation block
@property (assign,nonatomic) char hasIssuerCityCode; 
@property (assign,nonatomic) unsigned issuerCityCode;                                //@synthesize issuerCityCode=_issuerCityCode - In the implementation block
@property (assign,nonatomic) char hasEndEventInterface; 
@property (assign,nonatomic) unsigned endEventInterface;                             //@synthesize endEventInterface=_endEventInterface - In the implementation block
@property (assign,nonatomic) char hasSfiRead; 
@property (assign,nonatomic) unsigned sfiRead;                                       //@synthesize sfiRead=_sfiRead - In the implementation block
@property (assign,nonatomic) char hasSfiUpdated; 
@property (assign,nonatomic) unsigned sfiUpdated;                                    //@synthesize sfiUpdated=_sfiUpdated - In the implementation block
@property (assign,nonatomic) char hasMultiTagState; 
@property (assign,nonatomic) unsigned multiTagState;                                 //@synthesize multiTagState=_multiTagState - In the implementation block
@property (nonatomic,readonly) char hasTransactionId; 
@property (nonatomic,retain) NSData * transactionId;                                 //@synthesize transactionId=_transactionId - In the implementation block
-(void)setUuidReference:(NSData *)arg1 ;
-(char)hasUuidReference;
-(void)setTimeDeltaFromReference:(unsigned long long)arg1 ;
-(void)setHasTimeDeltaFromReference:(char)arg1 ;
-(char)hasTimeDeltaFromReference;
-(NSData *)uuidReference;
-(unsigned long long)timeDeltaFromReference;
-(void)setTerminalIdentifier:(NSData *)arg1 ;
-(char)hasAid;
-(void)setCommandParam1:(unsigned)arg1 ;
-(void)setHasCommandParam1:(char)arg1 ;
-(char)hasCommandParam1;
-(void)setCommandResult:(unsigned)arg1 ;
-(void)setHasCommandResult:(char)arg1 ;
-(char)hasCommandResult;
-(void)setHasCurrencyCode:(char)arg1 ;
-(void)setExpressType:(unsigned)arg1 ;
-(void)setHasExpressType:(char)arg1 ;
-(char)hasExpressType;
-(void)setHasExpiryDate:(char)arg1 ;
-(void)setHasHasExpiryDate:(char)arg1 ;
-(char)hasHasExpiryDate;
-(void)setInformative:(unsigned)arg1 ;
-(void)setHasInformative:(char)arg1 ;
-(char)hasInformative;
-(void)setHasIsBlacklisted:(char)arg1 ;
-(char)hasIsBlacklisted;
-(void)setHasSpid:(char)arg1 ;
-(char)hasSpid;
-(void)setTransactionCategory:(unsigned)arg1 ;
-(void)setHasTransactionCategory:(char)arg1 ;
-(char)hasTransactionCategory;
-(void)setTransactionExtension:(unsigned)arg1 ;
-(void)setHasTransactionExtension:(char)arg1 ;
-(char)hasTransactionExtension;
-(void)setHasTransactionInProgress:(char)arg1 ;
-(char)hasTransactionInProgress;
-(char)hasTerminalIdentifier;
-(void)setTotalRSSISamples:(unsigned)arg1 ;
-(void)setHasTotalRSSISamples:(char)arg1 ;
-(char)hasTotalRSSISamples;
-(void)setAvgRSSIValue:(unsigned)arg1 ;
-(void)setHasAvgRSSIValue:(char)arg1 ;
-(char)hasAvgRSSIValue;
-(void)setMaxRSSIValue:(unsigned)arg1 ;
-(void)setHasMaxRSSIValue:(char)arg1 ;
-(char)hasMaxRSSIValue;
-(void)setMinRSSIValue:(unsigned)arg1 ;
-(void)setHasMinRSSIValue:(char)arg1 ;
-(char)hasMinRSSIValue;
-(void)setHasLocalValidation:(char)arg1 ;
-(char)hasLocalValidation;
-(void)setAccessUniversityCode:(unsigned)arg1 ;
-(void)setHasAccessUniversityCode:(char)arg1 ;
-(char)hasAccessUniversityCode;
-(void)setIssuerCityCode:(unsigned)arg1 ;
-(void)setHasIssuerCityCode:(char)arg1 ;
-(char)hasIssuerCityCode;
-(void)setEndEventInterface:(unsigned)arg1 ;
-(void)setHasEndEventInterface:(char)arg1 ;
-(char)hasEndEventInterface;
-(void)setSfiRead:(unsigned)arg1 ;
-(void)setHasSfiRead:(char)arg1 ;
-(char)hasSfiRead;
-(void)setSfiUpdated:(unsigned)arg1 ;
-(void)setHasSfiUpdated:(char)arg1 ;
-(char)hasSfiUpdated;
-(void)setMultiTagState:(unsigned)arg1 ;
-(void)setHasMultiTagState:(char)arg1 ;
-(char)hasMultiTagState;
-(unsigned)commandParam1;
-(unsigned)commandResult;
-(unsigned)expressType;
-(char)hasExpiryDate;
-(unsigned)transactionCategory;
-(unsigned)transactionExtension;
-(NSData *)terminalIdentifier;
-(unsigned)totalRSSISamples;
-(unsigned)avgRSSIValue;
-(unsigned)maxRSSIValue;
-(unsigned)minRSSIValue;
-(unsigned)accessUniversityCode;
-(unsigned)issuerCityCode;
-(unsigned)endEventInterface;
-(unsigned)sfiRead;
-(unsigned)sfiUpdated;
-(unsigned)multiTagState;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned)currencyCode;
-(unsigned)version;
-(id)dictionaryRepresentation;
-(void)setCurrencyCode:(unsigned)arg1 ;
-(void)setVersion:(unsigned)arg1 ;
-(unsigned long long)timestamp;
-(unsigned)command;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(void)setTimestamp:(unsigned long long)arg1 ;
-(char)hasTimestamp;
-(void)setCommand:(unsigned)arg1 ;
-(char)hasVersion;
-(void)setHasTimestamp:(char)arg1 ;
-(NSData *)stationID;
-(char)hasCurrencyCode;
-(NSData *)transactionId;
-(void)setTransactionType:(unsigned)arg1 ;
-(void)setTransactionStatus:(unsigned)arg1 ;
-(void)setTransactionId:(NSData *)arg1 ;
-(unsigned)transactionType;
-(void)setHasTransactionType:(char)arg1 ;
-(char)hasTransactionType;
-(unsigned)transactionStatus;
-(void)setHasTransactionStatus:(char)arg1 ;
-(char)hasTransactionStatus;
-(char)hasTransactionId;
-(void)setHasVersion:(char)arg1 ;
-(void)setHasCommand:(char)arg1 ;
-(char)hasCommand;
-(unsigned)informative;
-(char)isBlacklisted;
-(void)setStationID:(NSData *)arg1 ;
-(char)hasStationID;
-(unsigned)transactionInProgress;
-(void)setTransactionInProgress:(unsigned)arg1 ;
-(void)setIsBlacklisted:(char)arg1 ;
-(NSData *)aid;
-(void)setAid:(NSData *)arg1 ;
-(unsigned)spid;
-(void)setSpid:(unsigned)arg1 ;
-(void)setLocalValidation:(unsigned)arg1 ;
-(unsigned)localValidation;
@end
