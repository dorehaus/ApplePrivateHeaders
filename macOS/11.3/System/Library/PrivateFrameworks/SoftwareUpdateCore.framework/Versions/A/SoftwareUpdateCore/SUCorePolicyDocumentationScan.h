/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:07 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/SoftwareUpdateCore.framework/Versions/A/SoftwareUpdateCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SoftwareUpdateCore/SoftwareUpdateCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary;

@interface SUCorePolicyDocumentationScan : NSObject <NSSecureCoding, NSCopying> {

	char _allowsCellular;
	char _discretionary;
	char _requiresPowerPluggedIn;
	char _liveServerCatalogOnly;
	int _downloadTimeoutSecs;
	long long _specifiedFields;
	NSDictionary* _additionalServerParams;
	NSDictionary* _additionalOptions;

}

@property (assign) long long specifiedFields;                                    //@synthesize specifiedFields=_specifiedFields - In the implementation block
@property (assign,nonatomic) char allowsCellular;                                //@synthesize allowsCellular=_allowsCellular - In the implementation block
@property (assign,nonatomic) char discretionary;                                 //@synthesize discretionary=_discretionary - In the implementation block
@property (assign,nonatomic) char requiresPowerPluggedIn;                        //@synthesize requiresPowerPluggedIn=_requiresPowerPluggedIn - In the implementation block
@property (assign,nonatomic) int downloadTimeoutSecs;                            //@synthesize downloadTimeoutSecs=_downloadTimeoutSecs - In the implementation block
@property (assign,nonatomic) char liveServerCatalogOnly;                         //@synthesize liveServerCatalogOnly=_liveServerCatalogOnly - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalServerParams;              //@synthesize additionalServerParams=_additionalServerParams - In the implementation block
@property (nonatomic,retain) NSDictionary * additionalOptions;                   //@synthesize additionalOptions=_additionalOptions - In the implementation block
+(char)supportsSecureCoding;
-(long long)specifiedFields;
-(void)setSpecifiedFields:(long long)arg1 ;
-(void)backToDefaults;
-(int)downloadTimeoutSecs;
-(void)setDownloadTimeoutSecs:(int)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)description;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setDiscretionary:(char)arg1 ;
-(id)summary;
-(void)setRequiresPowerPluggedIn:(char)arg1 ;
-(void)setAllowsCellular:(char)arg1 ;
-(char)requiresPowerPluggedIn;
-(char)allowsCellular;
-(char)discretionary;
-(void)setAdditionalOptions:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalOptions;
-(void)setAdditionalServerParams:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalServerParams;
-(void)setLiveServerCatalogOnly:(char)arg1 ;
-(char)liveServerCatalogOnly;
@end
