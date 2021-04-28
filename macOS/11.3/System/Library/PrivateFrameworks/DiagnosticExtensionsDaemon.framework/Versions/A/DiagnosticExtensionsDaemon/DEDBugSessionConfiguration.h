/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:52:20 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/PrivateFrameworks/DiagnosticExtensionsDaemon.framework/Versions/A/DiagnosticExtensionsDaemon
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <DiagnosticExtensionsDaemon/DiagnosticExtensionsDaemon-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/DEDSecureArchiving.h>

@class NSSet, NSString, NSNumber, NSDictionary, DEDNotifierConfiguration;

@interface DEDBugSessionConfiguration : NSObject <NSSecureCoding, NSCopying, DEDSecureArchiving> {

	NSSet* _requestedCapabilities;
	char _allowsCellularUpload;
	char _cloudkitUseDevelopmentEnvironment;
	long long _finishingMove;
	long long _notifyingMove;
	double _bugSessionStartTimeout;
	NSString* _seedingDeviceToken;
	long long _seedingSubmissionID;
	long long _seedingSubmissionType;
	long long _seedingEnvironment;
	NSString* _seedingHost;
	NSNumber* _radarProblemID;
	NSString* _radarAuthToken;
	NSString* _cloudkitContainer;
	NSDictionary* _cloudkitData;
	DEDNotifierConfiguration* _notifierConfiguration;

}

@property (readonly) NSString * requestedCapabilitiesString; 
@property (assign) long long finishingMove;                                       //@synthesize finishingMove=_finishingMove - In the implementation block
@property (assign) long long notifyingMove;                                       //@synthesize notifyingMove=_notifyingMove - In the implementation block
@property (assign) char allowsCellularUpload;                                     //@synthesize allowsCellularUpload=_allowsCellularUpload - In the implementation block
@property (assign) double bugSessionStartTimeout;                                 //@synthesize bugSessionStartTimeout=_bugSessionStartTimeout - In the implementation block
@property (retain) NSString * seedingDeviceToken;                                 //@synthesize seedingDeviceToken=_seedingDeviceToken - In the implementation block
@property (assign) long long seedingSubmissionID;                                 //@synthesize seedingSubmissionID=_seedingSubmissionID - In the implementation block
@property (assign) long long seedingSubmissionType;                               //@synthesize seedingSubmissionType=_seedingSubmissionType - In the implementation block
@property (assign) long long seedingEnvironment;                                  //@synthesize seedingEnvironment=_seedingEnvironment - In the implementation block
@property (retain) NSString * seedingHost;                                        //@synthesize seedingHost=_seedingHost - In the implementation block
@property (retain) NSNumber * radarProblemID;                                     //@synthesize radarProblemID=_radarProblemID - In the implementation block
@property (retain) NSString * radarAuthToken;                                     //@synthesize radarAuthToken=_radarAuthToken - In the implementation block
@property (retain) NSString * cloudkitContainer;                                  //@synthesize cloudkitContainer=_cloudkitContainer - In the implementation block
@property (assign) char cloudkitUseDevelopmentEnvironment;                        //@synthesize cloudkitUseDevelopmentEnvironment=_cloudkitUseDevelopmentEnvironment - In the implementation block
@property (retain) NSDictionary * cloudkitData;                                   //@synthesize cloudkitData=_cloudkitData - In the implementation block
@property (retain) DEDNotifierConfiguration * notifierConfiguration;              //@synthesize notifierConfiguration=_notifierConfiguration - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
+(id)archivedClasses;
+(id)secureUnarchiveWithData:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(char)isEqual:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)isEqualToConfiguration:(id)arg1 ;
-(id)secureArchive;
-(NSNumber *)radarProblemID;
-(NSString *)radarAuthToken;
-(long long)finishingMove;
-(long long)notifyingMove;
-(DEDNotifierConfiguration *)notifierConfiguration;
-(id)requestedCapabilities;
-(char)allowsCellularUpload;
-(long long)seedingSubmissionType;
-(long long)seedingSubmissionID;
-(NSString *)requestedCapabilitiesString;
-(NSString *)seedingDeviceToken;
-(long long)seedingEnvironment;
-(NSString *)seedingHost;
-(NSString *)cloudkitContainer;
-(char)cloudkitUseDevelopmentEnvironment;
-(NSDictionary *)cloudkitData;
-(void)requestCapabilitiesSet:(id)arg1 ;
-(void)requestCapabilities:(id)arg1 ;
-(void)setFinishingMove:(long long)arg1 ;
-(void)setNotifyingMove:(long long)arg1 ;
-(void)setAllowsCellularUpload:(char)arg1 ;
-(double)bugSessionStartTimeout;
-(void)setBugSessionStartTimeout:(double)arg1 ;
-(void)setSeedingDeviceToken:(NSString *)arg1 ;
-(void)setSeedingSubmissionID:(long long)arg1 ;
-(void)setSeedingSubmissionType:(long long)arg1 ;
-(void)setSeedingEnvironment:(long long)arg1 ;
-(void)setSeedingHost:(NSString *)arg1 ;
-(void)setRadarProblemID:(NSNumber *)arg1 ;
-(void)setRadarAuthToken:(NSString *)arg1 ;
-(void)setCloudkitContainer:(NSString *)arg1 ;
-(void)setCloudkitUseDevelopmentEnvironment:(char)arg1 ;
-(void)setCloudkitData:(NSDictionary *)arg1 ;
-(void)setNotifierConfiguration:(DEDNotifierConfiguration *)arg1 ;
@end

