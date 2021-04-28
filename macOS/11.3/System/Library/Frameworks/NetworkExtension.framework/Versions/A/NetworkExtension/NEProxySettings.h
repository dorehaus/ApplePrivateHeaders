/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, April 28, 2021 at 2:51:10 PM British Summer Time
* Operating System: Version 11.3 (Build 20E232)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/Versions/A/NetworkExtension
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkExtension/NetworkExtension-Structs.h>
#import <libobjc.A.dylib/NEConfigurationValidating.h>
#import <libobjc.A.dylib/NEPrettyDescription.h>
#import <libobjc.A.dylib/NEConfigurationLegacySupport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NEProxyServer, NSArray, NSURL, NSString;

@interface NEProxySettings : NSObject <NEConfigurationValidating, NEPrettyDescription, NEConfigurationLegacySupport, NSSecureCoding, NSCopying> {

	NEProxyServer* _HTTPServer;
	NEProxyServer* _HTTPSServer;
	char _autoProxyConfigurationEnabled;
	char _HTTPEnabled;
	char _HTTPSEnabled;
	char _excludeSimpleHostnames;
	char _autoProxyDiscovery;
	char _FTPEnabled;
	char _SOCKSEnabled;
	char _RTSPEnabled;
	char _gopherEnabled;
	char _usePassiveFTP;
	NSArray* _exceptionList;
	NSURL* _proxyAutoConfigURL;
	NSString* _proxyAutoConfigJavaScript;
	NEProxyServer* _FTPServer;
	NEProxyServer* _SOCKSServer;
	NEProxyServer* _RTSPServer;
	NEProxyServer* _gopherServer;
	NSArray* _supplementalMatchDomains;
	NSArray* _supplementalMatchOrders;

}

@property (nonatomic,readonly) char useForAllDomains; 
@property (assign) char autoProxyDiscovery;                                  //@synthesize autoProxyDiscovery=_autoProxyDiscovery - In the implementation block
@property (copy) NSURL * proxyAutoConfigURL;                                 //@synthesize proxyAutoConfigURL=_proxyAutoConfigURL - In the implementation block
@property (copy) NSString * proxyAutoConfigJavaScript;                       //@synthesize proxyAutoConfigJavaScript=_proxyAutoConfigJavaScript - In the implementation block
@property (assign) char FTPEnabled;                                          //@synthesize FTPEnabled=_FTPEnabled - In the implementation block
@property (copy) NEProxyServer * FTPServer;                                  //@synthesize FTPServer=_FTPServer - In the implementation block
@property (setter=OCKSEnabled) char SOCKSEnabled;                            //@synthesize SOCKSEnabled=_SOCKSEnabled - In the implementation block
@property (setter=OCKSServer,copy) NEProxyServer * SOCKSServer;              //@synthesize SOCKSServer=_SOCKSServer - In the implementation block
@property (assign) char RTSPEnabled;                                         //@synthesize RTSPEnabled=_RTSPEnabled - In the implementation block
@property (copy) NEProxyServer * RTSPServer;                                 //@synthesize RTSPServer=_RTSPServer - In the implementation block
@property (assign) char gopherEnabled;                                       //@synthesize gopherEnabled=_gopherEnabled - In the implementation block
@property (copy) NEProxyServer * gopherServer;                               //@synthesize gopherServer=_gopherServer - In the implementation block
@property (assign) char usePassiveFTP;                                       //@synthesize usePassiveFTP=_usePassiveFTP - In the implementation block
@property (copy) NSArray * supplementalMatchDomains;                         //@synthesize supplementalMatchDomains=_supplementalMatchDomains - In the implementation block
@property (copy) NSArray * supplementalMatchOrders;                          //@synthesize supplementalMatchOrders=_supplementalMatchOrders - In the implementation block
@property (readonly) char enabled; 
@property (assign) char autoProxyConfigurationEnabled;                       //@synthesize autoProxyConfigurationEnabled=_autoProxyConfigurationEnabled - In the implementation block
@property (copy) NSURL * proxyAutoConfigurationURL; 
@property (copy) NSString * proxyAutoConfigurationJavaScript; 
@property (assign) char HTTPEnabled;                                         //@synthesize HTTPEnabled=_HTTPEnabled - In the implementation block
@property (copy) NEProxyServer * HTTPServer; 
@property (assign) char HTTPSEnabled;                                        //@synthesize HTTPSEnabled=_HTTPSEnabled - In the implementation block
@property (copy) NEProxyServer * HTTPSServer; 
@property (assign) char excludeSimpleHostnames;                              //@synthesize excludeSimpleHostnames=_excludeSimpleHostnames - In the implementation block
@property (copy) NSArray * exceptionList;                                    //@synthesize exceptionList=_exceptionList - In the implementation block
@property (copy) NSArray * matchDomains; 
+(char)supportsSecureCoding;
-(char)checkValidityAndCollectErrors:(id)arg1 ;
-(char)needToUpdateKeychain;
-(NEProxyServer *)HTTPServer;
-(NEProxyServer *)HTTPSServer;
-(char)autoProxyDiscovery;
-(char)autoProxyConfigurationEnabled;
-(NSURL *)proxyAutoConfigURL;
-(NSString *)proxyAutoConfigJavaScript;
-(char)HTTPEnabled;
-(char)HTTPSEnabled;
-(char)FTPEnabled;
-(NEProxyServer *)FTPServer;
-(char)SOCKSEnabled;
-(NEProxyServer *)SOCKSServer;
-(char)RTSPEnabled;
-(NEProxyServer *)RTSPServer;
-(char)gopherEnabled;
-(NEProxyServer *)gopherServer;
-(char)excludeSimpleHostnames;
-(NSArray *)exceptionList;
-(char)usePassiveFTP;
-(NSArray *)supplementalMatchDomains;
-(NSArray *)supplementalMatchOrders;
-(void)setAutoProxyDiscovery:(char)arg1 ;
-(void)setAutoProxyConfigurationEnabled:(char)arg1 ;
-(void)setProxyAutoConfigURL:(NSURL *)arg1 ;
-(void)setProxyAutoConfigJavaScript:(NSString *)arg1 ;
-(void)setHTTPEnabled:(char)arg1 ;
-(void)setHTTPServer:(NEProxyServer *)arg1 ;
-(void)setHTTPSEnabled:(char)arg1 ;
-(void)setHTTPSServer:(NEProxyServer *)arg1 ;
-(void)setFTPEnabled:(char)arg1 ;
-(void)setFTPServer:(NEProxyServer *)arg1 ;
-(void)setSOCKSEnabled:(char)arg1 ;
-(void)setSOCKSServer:(NEProxyServer *)arg1 ;
-(void)setRTSPEnabled:(char)arg1 ;
-(void)setRTSPServer:(NEProxyServer *)arg1 ;
-(void)setGopherEnabled:(char)arg1 ;
-(void)setGopherServer:(NEProxyServer *)arg1 ;
-(void)setExcludeSimpleHostnames:(char)arg1 ;
-(void)setExceptionList:(NSArray *)arg1 ;
-(void)setUsePassiveFTP:(char)arg1 ;
-(void)setSupplementalMatchDomains:(NSArray *)arg1 ;
-(void)setSupplementalMatchOrders:(NSArray *)arg1 ;
-(void)syncWithKeychain;
-(void)removeKeychainItems;
-(void)copyPasswordsFromKeychain;
-(NSURL *)proxyAutoConfigurationURL;
-(void)setProxyAutoConfigurationURL:(NSURL *)arg1 ;
-(NSString *)proxyAutoConfigurationJavaScript;
-(void)setProxyAutoConfigurationJavaScript:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(char)enabled;
-(void)setMatchDomains:(NSArray *)arg1 ;
-(NSArray *)matchDomains;
-(id)copyLegacyDictionary;
-(id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2 ;
-(char)useForAllDomains;
-(id)initFromLegacyDictionary:(id)arg1 ;
@end

