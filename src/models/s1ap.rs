struct S1SetupRequest {
    
}

pub enum S1APMessage {
    InitialContextSetup,
    HandoverRequest,
    S1SetupRequest(S1SetupRequest),
    // TODO: add more messages
}




