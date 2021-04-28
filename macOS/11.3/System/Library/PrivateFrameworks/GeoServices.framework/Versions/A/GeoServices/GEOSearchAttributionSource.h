/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:14 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/Versions/A/GeoServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GeoServices/GeoServices-Structs.h>
#import <ProtocolBuffer/PBCodable.h>
#import <libobjc.A.dylib/NSCopying.h>

@class PBDataReader, NSString, NSMutableArray;

@interface GEOSearchAttributionSource : PBCodable <NSCopying> {

	PBDataReader* _reader;
	SCD_Struct_GE86* _attributionRequirements;
	SCD_Struct_GE86* _suppressAttributionLogos;
	NSString* _appAdamID;
	NSMutableArray* _attributionApps;
	NSMutableArray* _localizedAttributions;
	NSString* _sourceIdentifier;
	NSMutableArray* _supportedComponentActions;
	NSString* _webBaseActionURL;
	unsigned _readerMarkPos;
	unsigned _readerMarkLength;
	os_unfair_lock_s _readerLock;
	unsigned _sourceVersion;
	char _enforceAppStore;
	struct {
		unsigned has_enforceAppStore : 1;
		unsigned read_attributionRequirements : 1;
		unsigned read_suppressAttributionLogos : 1;
		unsigned read_appAdamID : 1;
		unsigned read_attributionApps : 1;
		unsigned read_localizedAttributions : 1;
		unsigned read_sourceIdentifier : 1;
		unsigned read_supportedComponentActions : 1;
		unsigned read_webBaseActionURL : 1;
		unsigned wrote_anyField : 1;
	}  _flags;

}

@property (nonatomic,retain) NSString * sourceIdentifier; 
@property (assign,nonatomic) unsigned sourceVersion; 
@property (nonatomic,retain) NSMutableArray * localizedAttributions; 
@property (nonatomic,readonly) unsigned long long attributionRequirementsCount; 
@property (nonatomic,readonly) int* attributionRequirements; 
@property (nonatomic,retain) NSMutableArray * attributionApps; 
@property (nonatomic,readonly) char hasWebBaseActionURL; 
@property (nonatomic,retain) NSString * webBaseActionURL; 
@property (nonatomic,retain) NSMutableArray * supportedComponentActions; 
@property (assign,nonatomic) char hasEnforceAppStore; 
@property (assign,nonatomic) char enforceAppStore; 
@property (nonatomic,readonly) char hasAppAdamID; 
@property (nonatomic,retain) NSString * appAdamID; 
@property (nonatomic,readonly) unsigned long long suppressAttributionLogosCount; 
@property (nonatomic,readonly) int* suppressAttributionLogos; 
+(char)isValid:(id)arg1 ;
+(Class)localizedAttributionType;
+(Class)attributionAppsType;
+(Class)supportedComponentActionsType;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(char)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)init;
-(id)initWithData:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(id)dictionaryRepresentation;
-(void)mergeFrom:(id)arg1 ;
-(char)readFrom:(id)arg1 ;
-(void)writeTo:(id)arg1 ;
-(void)copyTo:(id)arg1 ;
-(NSString *)sourceIdentifier;
-(void)readAll:(char)arg1 ;
-(id)jsonRepresentation;
-(id)initWithJSON:(id)arg1 ;
-(NSMutableArray *)attributionApps;
-(void)setSourceIdentifier:(NSString *)arg1 ;
-(void)setSourceVersion:(unsigned)arg1 ;
-(unsigned)sourceVersion;
-(NSString *)appAdamID;
-(void)addLocalizedAttribution:(id)arg1 ;
-(void)setAppAdamID:(NSString *)arg1 ;
-(unsigned long long)localizedAttributionsCount;
-(void)clearLocalizedAttributions;
-(id)localizedAttributionAtIndex:(unsigned long long)arg1 ;
-(NSMutableArray *)localizedAttributions;
-(void)setLocalizedAttributions:(NSMutableArray *)arg1 ;
-(char)hasAppAdamID;
-(NSString *)webBaseActionURL;
-(void)addAttributionRequirements:(int)arg1 ;
-(void)addAttributionApps:(id)arg1 ;
-(void)setWebBaseActionURL:(NSString *)arg1 ;
-(void)addSupportedComponentActions:(id)arg1 ;
-(void)setEnforceAppStore:(char)arg1 ;
-(void)addSuppressAttributionLogos:(int)arg1 ;
-(unsigned long long)attributionRequirementsCount;
-(void)clearAttributionRequirements;
-(int)attributionRequirementsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributionAppsCount;
-(void)clearAttributionApps;
-(id)attributionAppsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)supportedComponentActionsCount;
-(void)clearSupportedComponentActions;
-(id)supportedComponentActionsAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)suppressAttributionLogosCount;
-(void)clearSuppressAttributionLogos;
-(int)suppressAttributionLogosAtIndex:(unsigned long long)arg1 ;
-(int*)attributionRequirements;
-(void)setAttributionRequirements:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)attributionRequirementsAsString:(int)arg1 ;
-(int)StringAsAttributionRequirements:(id)arg1 ;
-(void)setAttributionApps:(NSMutableArray *)arg1 ;
-(char)hasWebBaseActionURL;
-(NSMutableArray *)supportedComponentActions;
-(void)setSupportedComponentActions:(NSMutableArray *)arg1 ;
-(char)enforceAppStore;
-(void)setHasEnforceAppStore:(char)arg1 ;
-(char)hasEnforceAppStore;
-(int*)suppressAttributionLogos;
-(void)setSuppressAttributionLogos:(int*)arg1 count:(unsigned long long)arg2 ;
-(id)suppressAttributionLogosAsString:(int)arg1 ;
-(int)StringAsSuppressAttributionLogos:(id)arg1 ;
-(id)bestLocalizedAttribution;
-(char)supportsAction:(int)arg1 forComponent:(int)arg2 ;
-(char)canLocallyHandleAction:(int)arg1 forComponent:(int)arg2 ;
-(char)canSuppressActionForComponent:(int)arg1 ;
@end
