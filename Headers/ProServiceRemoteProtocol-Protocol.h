//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSDictionary, NSString;

@protocol ProServiceRemoteProtocol
- (void)deliverHostNotification:(NSString *)arg1 object:(id)arg2 userInfo:(NSDictionary *)arg3;
- (void)loadPlugInSupportFrameworks:(NSArray *)arg1 withReply:(void (^)(NSError *))arg2;
- (void)viewServiceListnerEndPoint:(void (^)(NSXPCListenerEndpoint *))arg1;
@end

